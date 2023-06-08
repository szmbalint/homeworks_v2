#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int main(int argc, string argv[])
{
    if (argc == 3)
    {
        float osszeg = atof(argv[1]) * atof(argv[2]);
        printf("\nOsszeg: %.2f",osszeg);
        
    }
    else
    {
        puts("Hiba!");
    }


    return 0;
}