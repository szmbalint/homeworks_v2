#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

#define MAX 100

typedef struct 
{
    char marka[50];
    char modell[50];
    int evjarat;
    int loero;

} autok;

void sortbyevjarat(autok AUTO[],int n)
{   
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (AUTO[j].evjarat > AUTO[j + 1].evjarat)
            {
                autok seged = AUTO[j];
                AUTO[j] = AUTO[j + 1];
                AUTO[j + 1] = seged;
            }
            
        }
        
    }
    
}


int main(int argc, char *argv[])
{
    
    if (argc == 2)
    {
        autok AUTO[MAX] = {0};
        int n = atoi(argv[1]);
        int darab1 = 1;
        int darab2 = 1;
        for (int i = 0; i < n; i++)
        {
        
            printf("\nAdd meg a %d. szamu markat: ",darab1);
            scanf("%s",AUTO[i].marka);
            printf("\nAdd meg a %d. szamu modellt: ",darab1);
            scanf("%s",AUTO[i].modell);
            printf("\nAdd meg a %d. szamu evjaratot: ",darab1);
            scanf("%d",&AUTO[i].evjarat);
            printf("\nAdd meg a %d. szamu loerot: ",darab1);
            scanf("%d",&AUTO[i].loero);
            darab1++;
        }
        int darab3 = 1;
        for (int i = 0; i < n; i++)
        {
            
            printf("\nA(z) %d. auto adatai(nem rendezve): %s %s %d %d",darab3,AUTO[i].marka,AUTO[i].modell,AUTO[i].loero,AUTO[i].evjarat);
            darab3++;
        }

        sortbyevjarat(AUTO,n);
            
        for (int i = 0; i < n; i++)
        {
            
            printf("\nA(z) %d. auto adatai(rendezve): %s %s %d %d",darab2,AUTO[i].marka,AUTO[i].modell,AUTO[i].loero,AUTO[i].evjarat);
            darab2++;
        }
        

        
    }
    else
    {
        printf("Hiba!");
    }
    
    
    

    return 0;
}