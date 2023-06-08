#include <stdio.h> 
#include <string.h> 
#include "prog1.h"

int my_strlen(string szo)
{   
    int hossz = 0;
    for (int i = 0; i < strlen(szo); i++)
    {
        hossz++;
    }
    
    return hossz;
}

int main()
{
    string szo = "asdasda";
    printf("A szo hossza: %d",my_strlen(szo));

    return 0;
}