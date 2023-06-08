#include <stdio.h>  
#include <stdlib.h> 
#include <ctype.h> 
#include <time.h>

int main()
{
    int also;
    int felso;
    int darab;
    printf("Hany darab szam? ");
    scanf("%d", &darab);
    printf("Also hatar: ");
    scanf("%d", &also);
    printf("Felso hatar: ");
    scanf("%d", &felso);
    printf("\nA generalt szamok: ");

    srand(time(NULL));
    int intervallum = felso - also + 1;
    for (int i = 0; i < darab; i++)
    {
        int veletlen = rand(); 
        veletlen = veletlen % intervallum;
        veletlen = also + veletlen;
        printf("\t%d\t", veletlen); 

    }
    
    


    return 0;
}