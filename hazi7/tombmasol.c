#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int main()
{
    int darab;
    printf("hany darab szam: ");
    scanf("%d",&darab);
    int tomb[darab];
    int masolat[darab];
    for (int i = 1; i <= darab; i++)
    {
        printf("%d. szam: ",i);
        scanf("%d",&tomb[i-1]);
    }

    for (int i = 0; i < darab; i++)
    {
        if (tomb[i] < 0)
        {
            masolat[i] = tomb[i]*(-1);
        }
        else
        {
            masolat[i] = tomb[i];
        }
        
    }

    printf("A bevitt szamok abszertekei: ");
    for (int i = 0; i < darab; i++)
    {
        
        printf("%d",masolat[i]);
        if (i < darab-1)
        {
            printf(", ");
        }
        
        
    }
    printf("\nA megadott szamok: ");
    for (int i = 0; i < darab; i++)
    {
        
        printf("%d",tomb[i]);
        if (i < darab-1)
        {
            printf(", ");
        }
        
        
    }
    
    
    


    return 0;
}