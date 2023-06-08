#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 

#define SIZE 100

int strcmpi(const char* s1, const char* s2)
{
    int ertek;
    int jo = 0;
    if (strlen(s1) == strlen(s2))
    {
        for (int i = 0; i < strlen(s1); i++)
        {
            if (s1[i] == s2[i] || ((s1[i] + 32) == s2[i]) || (((s1[i] - 32) == s2[i])) || ((s2[i] + 32) == s1[i]) || ((s2[i] - 32) == s1[i]))
            {
                jo++;
            }
            
        }
        if (jo == strlen(s1))
        {
            return 1;
        }
        
    }
    else
    {
        return 0;
    }
    
    
    

    
}

int main()
{
    printf("\nElso szo: ");
    char szo1[SIZE];
    fgets(szo1,SIZE,stdin);
    szo1[strlen(szo1)-1] = '\0';

    printf("\nMasodik szo: ");
    char szo2[SIZE];
    fgets(szo2,SIZE,stdin);
    szo2[strlen(szo2)-1] = '\0';

    strcmpi(szo1,szo2) ? printf("\nEgyeznek!") : printf("\nNem egyeznek!");


    return 0;
}