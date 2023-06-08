#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int negyzetosszeg()
{
    int eredmeny = 0;
    for (int i = 1; i <= 100; i++)
    {
        eredmeny += (i*i);
    }
    
    return eredmeny;
    
}


int osszegnegyzet()
{
    int eredmeny = 0;
    for (int i = 1; i <= 100; i++)
    {
        eredmeny += i; 
    }


    return eredmeny*eredmeny;
}

int main()
{
    int szaz[100];
    
    printf("\nAz elso szaz term szam negyzetenek osszege: %d ",negyzetosszeg());
    printf("\nAz elso szaz term szam osszegenek a negyzete: %d ",osszegnegyzet());

    int kulonbseg = osszegnegyzet() - negyzetosszeg();
    printf("\nEredmeny: %d", kulonbseg);

    return 0;
}