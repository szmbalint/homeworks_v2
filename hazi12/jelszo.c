#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"
#include <time.h>

#define MERET 11

int main()
{
    //          [48-57] [65-90] [97-122] [46, 59, 44, 39]
    //melyik:       1       2       3           4
    srand(time(NULL));
    char jelszo[MERET] = {0};
    int hossz = rand() % (12 - 8 + 1) + 8;
    for (int i = 0; i < hossz; i++)
    {
        int melyik = rand() % (4 - 1 + 1) + 1;
        if (melyik == 1)
        {
            int karakter = rand() % (57 - 48 + 1) + 48;
            char kar = karakter;
            jelszo[i] = kar;
        }
        else if (melyik == 2)
        {
            int karakter = rand() % (90 - 65 + 1) + 65;
            char kar = karakter;
            jelszo[i] = kar;
        }
        else if (melyik == 3)
        {
            int karakter = rand() % (122 - 97 + 1) + 97;
            char kar = karakter;
            jelszo[i] = kar;
        }
        else if (melyik == 4)
        {
            int karakterspec = rand() % (4 - 1) + 1;
            if (karakterspec == 1)
            {
                char karspec = 46;
                jelszo[i] = karspec;
            }
            else if(karakterspec == 2)
            {
                char karspec = 59;
                jelszo[i] = karspec;
            }
            else if(karakterspec == 3)
            {
                char karspec = 44;
                jelszo[i] = karspec;
            }
            else if(karakterspec == 4)
            {
                char karspec = 39;
                jelszo[i] = karspec;
            }
            
        }
        
    }
    for (int i = 0; i < hossz; i++)
    {
        printf("%c",jelszo[i]);
    }
    printf("\n%d",hossz);
    


    return 0;
}