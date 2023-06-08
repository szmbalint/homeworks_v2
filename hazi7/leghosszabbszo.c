#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include <string.h>

#define size 1000

int main()
{
    int leghosszabb = 0;
    char tomb[size] = {0};
    int darab = 0;
    while (1)
    {
        char tomb[size] = {'\0'};

        printf("A szo: ");
        fgets(tomb,size,stdin);
        if (tomb[0] == '*')
        {
            if(tomb[2]=='\0')
            {
                break;
            }
        }
        else if (strlen(tomb) > leghosszabb)
        {
            leghosszabb = strlen(tomb)-1;
        }
        darab++;
    }
    printf("\n%d darab szot adott meg!",darab);
    printf("\n%d hosszu volt a leghosszabb!", leghosszabb);

    return 0;
}