#include <stdio.h> 
#include <string.h> 
#include "prog1.h"

int char_count(string s, char c)
{

    int elofordulas = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            elofordulas++;
        }
        
    }
    if (elofordulas > 0)
    {
        return elofordulas;
    }
    else 
    {
        return 0;
    }
}



int main()
{

    printf("Az elofordulasainak szama: %d",char_count("Abba", 'b'));

    return 0;
}