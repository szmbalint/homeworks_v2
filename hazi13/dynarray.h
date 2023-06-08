#ifndef DYNARRAY_H 
#define DYNARRAY_H

#define MULTIPLIER 2

typedef struct 
{
    int *elems;     //a dinamikusan lefoglalt tomb elso elemere mutat
    int length;     //a betett elemek szama
    int capacity;   //a tomb kapacitasa
} DynArray; 

void mem_error_exit();

DynArray *da_create();

void da_append(DynArray *self, int data);

void *da_destroy(DynArray *self);


#endif          //DYNARRAY