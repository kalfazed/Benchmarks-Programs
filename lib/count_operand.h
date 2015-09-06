#ifndef COUNT_OPERAND_H
#define COUNT_OPERAND_H
#include <inttypes.h>

void
register_address_pair(uintptr_t first,
                      uintptr_t last,
                      int is_array);
int
lookup_address(uintptr_t addr, int is_array);
int
address_pair_length(int is_array);
#endif /* COUNT_OPERAND_H */
