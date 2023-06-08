#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

#define MAX 1000    

int main()
{
    string fajlnev = "1000.txt";
    char sorok[MAX];
    FILE *fp = fopen(fajlnev,"r");
    int szamok[MAX];
    int k = 0;
    while (fgets(sorok,MAX,fp) != NULL)
    {
        szamok[k] = atoi(sorok);
        k++;
    }
    
    for (int i = k; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (szamok[j] > szamok[j + 1])
            {
                int seged = szamok[j];
                szamok[j] = szamok[j + 1];
                szamok[j + 1] = seged;
            }
            
        }
        
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d\n",szamok[i]);
    }
    
    
    

    fclose(fp);

    return 0;
}