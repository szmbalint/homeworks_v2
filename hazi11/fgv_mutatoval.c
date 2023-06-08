#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include <time.h>

float atlag;

void szamolas(int szamok[], int tomb[], float atlagszam)
{
    int legkisebb = tomb[0];
    int legnagyobb = tomb[0];
    int osszeg = 0;
    for (int i = 0; i < 10; i++)
    {
        if (tomb[i] < legkisebb)
        {
            legkisebb = tomb[i];
        }
        else if (tomb[i] > legnagyobb)
        {
            legnagyobb = tomb[i];
        }
        osszeg += tomb[i];
        
    }
    atlag = osszeg / 10;


    szamok[0] = legkisebb;
    szamok[1] = legnagyobb;
    atlagszam = atlag;
}

int main()
{

    int also = 10;
    int felso = 99;
    int darab = 10;

    srand(time(NULL));
    int intervallum = felso - also + 1;
    int tomb[darab];
    for (int i = 0; i < darab; i++)
    {
        tomb[i] = rand() % (felso - also + 1) + also;
    }

    for (int  i = 0; i < darab; i++)
    {
        printf("%d\t", tomb[i]);
    }

    int szamok[3];
    szamolas(szamok, tomb, atlag);
    int *p = &szamok[0];
    float *atlagszam = &atlag;

    printf("\nA legkisebb elem: %d",p[0]);
    printf("\nA legnagyobb elem: %d",p[1]);
    printf("\nAz atlag: %f",atlagszam[0]);
    
    

    return 0;
}