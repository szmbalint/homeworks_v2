#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"



int konvertal(string bemenet)
{
    int szam;
    char tomb[strlen(bemenet)-1];
    for (int i = 0; i < strlen(bemenet); i++)
    {
        if ((int)bemenet[i] > 48 && (int)bemenet[i] < 58)       //ha 0 és 9 közötti
        {
            if ((int)bemenet[0] == 45)          //ha negativ
            {
                if ((int)bemenet[1] == 45)      //ha -0
                {
                    return 0;
                }
                else                            //ha '-'valami
                {
                    tomb[0] = '-';
                    for (int j = 1; j < strlen(bemenet)-1; j++)
                    {
                        if ((int)bemenet[j] > 48 && (int)bemenet[j] < 58)
                        {
                            tomb[j] = bemenet[j];
                        }
                        else
                        {
                            return 0;
                        }       
            
                    }
        
                }
            }
            else                            //ha pozitiv
            {
                if ((int)bemenet[1] == 45)      //ha 0
                {
                    return 0;
                }
                else                            //ha egyeb szammal kezdodik
                {
                    
                    for (int j = 0; j < strlen(bemenet)-1; j++)
                    {
                        if ((int)bemenet[j] > 48 && (int)bemenet[j] < 58)
                        {
                            tomb[j] = bemenet[j];
                        }
                        else
                        {
                            return 0;
                        }       
            
                    }
        
                }
            }
        }
        else
        {
            return 0;
        }
        
    }
    
    for (int i = 0; i < strlen(bemenet); i++)
    {
        printf(" %c ",tomb[i]);
    }
    
    
    
    
    
    
}

int main()
{
    string sztring  = "-23";
    printf("A sztring: %s",sztring);
    
    
    printf("\nErtek: %d",konvertal(sztring));
    return 0;
}