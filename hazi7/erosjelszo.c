#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

#define size 50

int teszt(char jelszo[])
{
    int ertek = 0;
    int kisbetu = 0;
    int nagybetu = 0;
    int szamjegy = 0;
    int kar = 0;
    for (int i = 0; i < strlen(jelszo)-1; i++)
    {
        if (isdigit(jelszo[i]))
        {
            szamjegy++;
        }
        else if(islower(jelszo[i]))
        {
            kisbetu++;
        }
        else if(isupper(jelszo[i]))
        {
            nagybetu++;
        }
    
        kar++;
        
    }
    
    if(kisbetu > 0 && nagybetu > 0 && szamjegy > 0 && kar >= 7)
    {
        ertek = 1;
    }
    else if(jelszo[0] == '*')
    {
        return 2;
        
        
    }
    return ertek;
    
}


int main()
{
    char jelszo[size];

	
    while (1)
    {
        printf("Adj meg egy sztringet: ");
	    fgets(jelszo,size,stdin); 		
	    jelszo[strlen(jelszo)-1] = '\0'; 

        if (teszt(jelszo) == 1)
        {
            printf("\neros jelszo\n");
        }
        else if (teszt(jelszo) == 0)
        {
            printf("\ngyenge jelszo\n");
        }
        else if(teszt(jelszo) == 2)
        {
            break;
        }

        
        
    }
    


    return 0;
}