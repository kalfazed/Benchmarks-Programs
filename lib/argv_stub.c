/* choose an application */
#define  NON
#undef   AACENC

#ifdef NON
int set_argv(int *argc, char **argv[])
{
    return 0;
}
#endif

#ifdef AACENC
char *argv_dummy0 = "aacenc";
char *argv_dummy1 = "konoki.wav";
char *argv_dummy2 = "konoki.aac";
char *argv_dummy[3];

int set_argv(int *argc, char **argv[])
{
    *argc = 3;
	argv_dummy[0] = argv_dummy0;
	argv_dummy[1] = argv_dummy1;
	argv_dummy[2] = argv_dummy2;
    *argv = argv_dummy;
	return 0;
}

#endif
