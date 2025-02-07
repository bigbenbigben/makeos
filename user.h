#pragma once
#include "common.h"

struct sysret {
    int a0;
    int a1;
    int a2;
};

__attribute__((noreturn)) void exit(void);
void putchar(char ch);
int getchar(void);