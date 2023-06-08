#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int main(int argc, string argv[])
{
    if (argc == 3)
    {
        int osszeg = atoi(argv[1]) + atoi(argv[2]);
        printf("\nOsszeg: %d",osszeg);
        
    }
    else
    {
        puts("Hiba!");
    }


    return 0;
}