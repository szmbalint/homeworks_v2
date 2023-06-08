#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include <time.h>

int main()
{
    int also = 1;
    int felso = 99;
    int darab;
    srand(time(NULL));
    printf("\nAlso hatar: ");
    scanf("%d",&also);
    printf("\nFelso hatar: ");
    scanf("%d",&felso);
    printf("\nDarab: ");
    scanf("%d",&darab);
    int tomb[darab];
    int intervallum = felso - also + 1;
    for (int i = 0; i < darab; i++)
    {
        int veletlen = rand();
        veletlen = veletlen % intervallum;
        veletlen = also + veletlen;
        tomb[i] = veletlen;
    }
    
    for (int i = 0; i < darab; i++)
    {
        for (int j = 0; j < darab; j++)
        {
            if(tomb[i] == tomb[j])
            {
                int veletlen = rand();
                veletlen = veletlen % intervallum;
                veletlen = veletlen + also;
                tomb[i] = veletlen;
            }
        }
        
    }
    
    for (int i = 0; i < darab; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (tomb[i] < tomb[j])
            {
                int seged = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = seged;
            }
            
        }
        
    }
    
    printf("\nA veletlen szamok (rendezve): ");
    for (int i = 0; i < darab; i++)
    {
        printf(" %d ",tomb[i]);
    }
    

    return 0;
}