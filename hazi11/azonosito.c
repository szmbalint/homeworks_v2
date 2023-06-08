#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int is_valid_c_identifier(const char* input)
{
    int ertek;
    if (input[0] > 47 && input[0] < 58)
    {
        return 0;
    }
    
    for (int i = 0; i < strlen(input); i++)
    {
        if ((strlen(input) < 1) || (input[i] < 65 && input[i] > 57) || (input[i] > 90 && input[i] < 95) || input[i] == 96 || input[i] < 48 || input[i] > 123)
        {
            ertek = 0;
            return 0;
            break;
        }
        else
        {
            ertek = 1;
        }
        
    }
    
    return ertek;
}

int main()
{
    
    while (1)
    {
        string szo = get_string("\nInput: ");
        if (szo[0] == '*' && szo[1] == '\0')
        {
            break;
        }
        else if (is_valid_c_identifier(szo))
        {
            printf("YES\n");
        }
        else if (is_valid_c_identifier(szo) == 0)
        {
            printf("NO\n");
        }
        
        

        
    }
    


    return 0;
}