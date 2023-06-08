#include <stdio.h> 
#include <string.h> 
#include "prog1.h"

string whatchar(char betu)
{

    if(betu >= 97 && betu <= 122)
    {
        return "kisbetu";
    }
    else if (betu >= 48 && betu <= 57)
    {
        return "szamjegy";
    }
    else if (betu >= 65 && betu <= 90)
    {
        return "nagy betu";
    }
    else
    {
        return "egyeb karakter";
    }
    
}


int main()
{
    char betu;
    printf("A karakter: ");
    scanf("%c",&betu);
    printf("Ez egy %s ",whatchar(betu));


    return 0;
}