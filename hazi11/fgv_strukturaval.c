#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 


typedef struct 
{
    int legkisebb;
    int legnagyobb;
    float atlag;

} sors;

sors * szamolas(int tomb[])
{
    sors *p = malloc(sizeof(sors));
    int kisebb = tomb[0];
    int nagyobb = tomb[0];
    int osszeg = 0;
    for (int i = 0; i < 10; i++)
    {
        if (tomb[i] < kisebb)
        {
            kisebb = tomb[i];
        }
        else if (tomb[i] > nagyobb)
        {
            nagyobb = tomb[i];
        } 
        osszeg += tomb[i];
    }
    float atlag = osszeg / 10;

    p->atlag = atlag;
    p->legkisebb = kisebb;
    p->legnagyobb = nagyobb;    
     
    return p;


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
    
    sors *szamok = szamolas(tomb);

    printf("\nLegkisebb elem: %d\nLegnagyobb elem: %d\nAz elemek atlaga: %f", szamok->legkisebb, szamok->legnagyobb, szamok->atlag);
    
    
    
    return 0;
}