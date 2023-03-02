#include <stdio.h>

int main()
{
    int magassag = 0;
    while(1)
    {
        printf("magassag(pozitiv, paratlan): ");
        scanf("%d",&magassag);
        if (magassag > 0 && magassag % 2 == 1)
        {
            break;
        }   
    
    }
    int l = 0;
    int g = magassag -1;
    int h = 0;
    int seg = magassag;
    for (int i = 1; i <= magassag; i++)
    {
            printf("\n");
            if (i <= (magassag / 2 ))
            {
                for (int j = 1; j <= magassag-i; j++)            
                {
                    printf(" ");
                }
                for (int k = 1; k <= i+l; k++)
                {
                printf("#");
                }
                l++;
            }
            else
            {
                
                for (int p = i-2; p >= 0;p--)
                {
                    printf(" ");
                }
                g--;
                for (int o = 1; o <= seg; o++)
                {
                    printf("#");
                    
                }
                h++;
                seg -= 2;
                
            }
            
            
            
            
    }

    
    
    
}