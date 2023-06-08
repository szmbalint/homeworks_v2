#include <stdio.h> 
#include <string.h> 
#include "prog1.h"

int rfind_char(string s, char c)
{
    int elofordulas = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            elofordulas = i;
        }
        
    }
    if (elofordulas > 0)
    {
        return elofordulas;
    }
    else 
    {
        return -1;
    }
    
    
    
}

int main()
{

    printf("Az utolso elofordulas: %d",rfind_char("Abba", 'a'));

    return 0;
}