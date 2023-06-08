#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int main()
{
    int tomb[99] = {0};
    
    while(1)
    {
        int szam;
        printf("\nAz egesz szam: ");
        scanf("%d",&szam);

        if(szam == 0)
        {
            break;
        }
        else if(szam < 0 || szam > 99)
        {
            printf("\nEz a szam kivul esik az elfogadhato intervallumbol!");
        }
        else
        {
            tomb[szam]++;
        }
        
    }
    int darab = 0;
    for (int i = 0; i < 99; i++)
    {
        if (tomb[i] > 0)
        {
            darab++;
        }
        
    }

    printf("\n%d db kulonbozo szamot adott meg!",darab);
    printf("\nEzek a szamok (novekvo sorrendben):");
    for (int i = 0; i < 99; i++)
    {
        if(tomb[i] > 0)
        {
            printf(" %d,",i);
        }
    }
    
    


    return 0;
}