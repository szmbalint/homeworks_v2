#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"


#define size 100


int main()
{
    char szo[size];
    int kisbetuk = 0;
    int nagybetuk = 0;
    int szokozok = 0;
    int szamjegyek = 0;
    while(1)
    {
        for (int i = 0; i < size; i++)
        {
            szo[i] = '\0';
        }
        
        printf("A sztring: ");
        fgets(szo,size,stdin);
        if (szo[0] == '*' && szo[2] == '\0')
        {
            break;
        }
        
        for (int i = 0; i < size; i++)
        {
            
                char c = szo[i];
                if (isdigit(c))
                {
                    szamjegyek++;
                }
                else if(isupper(c))
                {
                    nagybetuk++;
                }
                else if(islower(c))
                {
                    kisbetuk++;
                }
                else if (c == ' ')
                {
                    szokozok++;
                }
                
                
                
            
            
        }


        
    }


    printf("\nA kisbetuk szama: %d", kisbetuk);
    printf("\nA nagybetuk szama: %d", nagybetuk);
    printf("\nA szokozok szama: %d", szokozok);
    printf("\nA szamjegyek szama: %d", szamjegyek);



    return 0;
}