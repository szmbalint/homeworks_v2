#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

#define MAX 1000

int main()
{

    string fajlnev = "millions.txt";

    FILE *fp = fopen(fajlnev, "r");
    char sorok[MAX];
    int darab = 0;
    while (fgets(sorok, MAX, fp) != NULL)
    {
        darab++;
    }

    fclose(fp);

    printf("%d",darab);
    FILE *fp2 = fopen(fajlnev, "r");
    int *p = malloc(darab*(sizeof(int)));
    printf("\nlefoglalva\n");
    int k = 0;
    char sorok2[MAX];
    
    while (fgets(sorok2, MAX, fp2) != NULL)
    {
        
        p[k] = atoi(sorok2);
        k++;
        
    }
    fclose(fp2);
    printf("ciklus%d",k);
    for (int i = k; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (p[j] > p[j + 1])
            {
                int seged = p[j];
                p[j] = p[j + 1];
                p[j + 1] = seged;
            }
            
        }
        
    }
    
    for (int i = 0; i < darab; i++)
    {
        printf("%d\t",p[i]);
    }
    free(p);
    

   

    return 0;
}