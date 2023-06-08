#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int main(int argc, string argv[])
{
    switch (argc)
    {
    case 3:
        printf("\nAz osszeg: %d\n",atoi(argv[1]) + atoi(argv[2])); 
        break;
    
    default: printf("Hiba! Pontosan két számot adj meg!");
        break;
    }
    


    return 0;
}