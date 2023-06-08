#include <stdlib.h> 
#include <stdio.h> 
#include "dynarray.h"

// typedef struct 
// {
//     int *elems;     //a dinamikusan lefoglalt tomb elso elemere mutat
//     int length;     //a betett elemek szama
//     int capacity;   //a tomb kapacitasa
// } DynArray; 

void mem_error_exit()
{
    fprintf(stderr,"Error! cannot locate memory");
}

DynArray *da_create()
{
    DynArray *result = malloc(sizeof(DynArray));
    if (result == NULL)
    {
        mem_error_exit();
    }


    result->elems = malloc(MULTIPLIER * sizeof(int));
    if (result->elems == NULL)
    {
        mem_error_exit();
    }
    result->length = 0;
    result->capacity = 2;
    

    return result;
}

void da_append(DynArray *self, int data)
{
    if (self->length == self->capacity)
    {
        int new_capacity = 2 * self->capacity;
        self->elems = realloc(self->elems, sizeof(int) * new_capacity);
        
        if (self->elems == NULL)
        {
            mem_error_exit();
        }
        self->capacity = new_capacity;
    }

    self->elems[self->length] = data;
    self->length += 1;
    
}

void *da_destroy(DynArray *self)
{
    free(self->elems);
    free(self);
    //
    return NULL;
}

