#include <stdio.h>

int main()
{
    int magassag = 0;
    printf("magassag: ");
    scanf("%d",&magassag);
    for (int i = 1; i <= magassag; i++)
    {
        
        



        for (int l = 1; l <= magassag-i; l++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
        
    }
    

    return 0;
}