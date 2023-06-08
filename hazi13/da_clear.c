#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "dynarray.h"

void da_clear(DynArray *self)
{
    
    self->capacity = 0;
    self->length = 0;
    self->elems = 0;
    
}

int main()
{
    DynArray *li = da_create();

    da_append(li, 1);
    da_append(li, 2);
    da_append(li, 3);

    printf("Clear elott: ");
    for (int i = 0; i < li->length; i++)
    {
        printf("%d ",li->elems[i]);
    }
    puts("");

    da_clear(li);

    // printf("Clear utan: ");
    // for (int i = 0; i < li->length; i++)
    // {
    //     printf("%d ",li->elems[i]);
    // }
    // puts("");
    da_append(li, 4);
    da_append(li, 5);
    da_append(li, 6);
    printf("ujrabeiras utan utan: ");
    for (int i = 0; i < li->length; i++)
    {
        printf("%d ",li->elems[i]);
    }   
    da_destroy(li);
    return 0;
}