#ifndef CLOX_COMPILER_H
#define CLOX_COMPILER_H

#include "vm.h"

void compile(const char *source, Chunk *chunk);

#endif //CLOX_COMPILER_H
