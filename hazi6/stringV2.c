#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int konvertal(string bemenet)
{
    int szam[strlen(bemenet)-1];
    //szam = atoi(bemenet);
    int meret = 0;
    for (int i = 0; i < strlen(bemenet)-1; i++)
    {
        szam[i] = atoi(bemenet[i]);
        meret++;
    }

    for (int i = 0; i < meret; i++)
    {
        printf("%d",szam[i]);
    }
    
    
    
    

    return 0;
    

}

int main()
{
    string sztring = "-23";
    printf("A sztring: %s",sztring);
    
    
    printf("\nErtek: %d",konvertal(sztring));


    return 0;
}