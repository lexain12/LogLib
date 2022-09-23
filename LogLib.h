#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <cstring>

#ifndef LOGNAME
#define LOGNAME "logfile.txt"
#endif

int print(char param);
int print(int param);
int print(char* param);
int print(double param);

FILE* const logOpen(const char*);

FILE* const LOGFILEPTR = logOpen(LOGNAME);

#define $ fprintf(LOGFILEPTR, "FILE: %s, Function: %s, line: %d\n", __FILE__, __func__, __LINE__);

#define $$(param) param; print(#param); print(param); print('\n'); \

