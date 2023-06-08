#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int invert(int n)
{
    if (n == 0)
    {
        n = 1;
    }
    else if(n == 1)
    {
        n = 0;
    }
    

    return n;
}

int main()
{
    int tomb[600] = {0};
    int i = 0;
    int kor = 1;
    while(kor <= 600)
    {
        int elem = 0;
        for (int j = 1; j <= 600; j++)
        {
            if (j % kor == 0)
            {
                tomb[elem] = invert(tomb[elem]);
            }
            elem++;
            
        }
        
        
        
        kor++;
    }

    int szam = 0;
    
    for (int l = 0; l < 600; l++)
    {
        if (tomb[l] == 1)
        {
            szam++;
        }        
    }

    int helyek[szam];
    int szamlalo = 0;
    for (int o = 0; o < 600; o++)
    {
        if (tomb[o] == 1)
        {
            helyek[szamlalo] = o + 1;
            szamlalo++;
        }
        
    }

    for (int p = 0; p < szam; p++)
    {
        printf("%d",helyek[p]);
    }
    
    
    
    
    
    
    
    
    return 0;
}