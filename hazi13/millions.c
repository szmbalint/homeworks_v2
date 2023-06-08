#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "dynarray.h"


int swap(const void* a, const void* b) 
{
    int intA = *((int*)a);
    int intB = *((int*)b);

    if (intA < intB) 
    {
        return -1;
    } 
    else if (intA > intB) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}

int main()
{
    char *fajlnev = "millions.txt";
    FILE *fp = fopen(fajlnev,"r");
    DynArray *li = da_create();
    // for (int i = 0; i <= 20; i++)
    // {
    //     da_append(li, i);
    // }

    char sorok[1000];
    while (fgets(sorok, 1000, fp) != NULL)
    {
        da_append(li, atoi(sorok));
    }
    

    qsort(li->elems,li->length,sizeof(int),swap);

    for (int i = 0; i < li->length; i++)
    {
        printf("\n%d",li->elems[i]);
    }
    

    fclose(fp);
    li = da_destroy(li);
    return 0;
}