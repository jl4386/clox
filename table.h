#ifndef CLOX__TABLE_H_
#define CLOX__TABLE_H_

#include "common.h"
#include "value.h"

typedef struct {
  ObjString *key;
  Value value;
} Entry;

typedef struct {
  int count;
  int capacity;
  Entry *entries;
} Table;

void initTable(Table *table);
void freeTable(Table *table);

#endif  // CLOX__TABLE_H_
