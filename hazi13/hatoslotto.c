#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"

int main()
{
    int tomb[6];
    for (int elso = 1; elso < 46; elso++)
    {
        tomb[0] = elso;
        for (int masodik = 1; masodik < 46; masodik++)
        {
            tomb[1] = masodik;
            for (int harmadik = 1; harmadik < 46; harmadik++)
            {
                tomb[2] = harmadik;
                for (int negyedik = 1; negyedik < 46; negyedik++)
                {
                    tomb[3] = negyedik;
                    for (int otodik = 1; otodik < 46; otodik++)
                    {
                        tomb[4] = otodik;
                        for (int hatodik = 1; hatodik < 46; hatodik++)
                        {
                            tomb[5] = hatodik;
                            
                            if ((tomb[0] + tomb[1] + tomb[2] + tomb[3] + tomb[4] + tomb[5] == 90) && 
                                (tomb[0] * tomb[1] * tomb[2] * tomb[3] * tomb[4] * tomb[5] == 996300))
                            {
                                printf("\n%d, %d, %d, %d, %d, %d",tomb[0],tomb[1],tomb[2],tomb[3],tomb[4],tomb[5]);
                                exit(1);
                            }
                            
                        }
                        
                    }
                    
                }            
            }
            
        }
        
    }
    


    return 0;
}