#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include <time.h>

#define SIZE 100

void my_strfry(char sztring[])
{
    int hossz = strlen(sztring);
    for (int i = 0; i < strlen(sztring); i++)
    {
        int hova = rand() % (hossz - 1 + 1) + 0;
        char seged = sztring[i];
        sztring[i] = sztring[hova];
        sztring[hova] = seged;
    }
    
}

int main()
{
    srand(time(NULL));
    char sztring[100];
    printf("A sztring: ");
    fgets(sztring,SIZE,stdin);
    sztring[strlen(sztring)-1] = '\0';
    my_strfry(sztring);
    printf("\nAz osszekevert valtozat: %s",sztring);


    return 0;
}