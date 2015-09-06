#include <stdlib.h>
#include <assert.h>
#include "count_operand.h"

typedef struct _address_pair {
    unsigned long first;
    unsigned long last;
    struct _address_pair *left;
    struct _address_pair *right;
} Address_pair;

Address_pair *array_address_pair_head = NULL;
Address_pair *scalar_address_pair_head = NULL;

void
register_address_pair(uintptr_t first,
                      uintptr_t last,
                      int is_array)
{
    Address_pair *ap, *head, *ap2;

    assert(first < last);

    if (is_array) {
        head = array_address_pair_head;
    } else{
        head = scalar_address_pair_head;
    }

    for (ap = head, ap2 = head; ap != NULL;) {
        if (ap->first > last) {
            ap2 = ap;
            ap = ap->left;
        } else if (ap->last < first) {
            ap2 = ap;
            ap = ap->right;
        } else if (ap->first == last) {
            ap->first = first;
            return;
        } else if (ap->last == first) {
            ap->last = last;
            return;
        }
    }

    ap = calloc(1, sizeof(Address_pair));
    if (ap == NULL) {
        exit(1);
    }
    ap->first = first;
    ap->last = last;

    if (ap2 != NULL){
        if (ap2->first > ap->last) {
            ap2->left = ap;
        } else if (ap2->last < ap->first) {
            ap2->right = ap;
        }
    } else head = ap;

    if (is_array) {
        array_address_pair_head = head;
    } else {
        scalar_address_pair_head = head;
    }
}

int
lookup_address(uintptr_t addr, int is_array)
{
    Address_pair *ap, *head;

    if (is_array) {
        head = array_address_pair_head;
    } else {
        head = scalar_address_pair_head;
    }

    for (ap = head; ap != NULL;) {
        if (addr < ap->first) ap = ap->left;
        else if (addr > ap->last) ap = ap->right;
        else if (addr >= ap->first && addr <= ap->last) {
            return 1;
        }
    }

    return 0;
}
