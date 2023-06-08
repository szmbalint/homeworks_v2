#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"
#include <time.h>

void feltolt(const int n, int tomb[])
{
    srand(time(NULL));
    int felso = 849;
    int also = 125;
    int intervallum = felso - also + 1;
    for (int i = 0; i < n; i++)
    {
        int veletlen = rand();
        veletlen = veletlen % intervallum;
        veletlen = veletlen + also;
        tomb[i] = veletlen;
    }
    
}

int main()
{
    
    int elemszam = 1000;
    int tomb[elemszam];
    feltolt(elemszam,tomb);
    for (int i = 0; i < elemszam; i++)
    {
        printf("\t%d",tomb[i]);
    }
    

    return 0;
}