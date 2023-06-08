#include <stdio.h> 

int rendezette(int tomb[],int darab)
{
    int j = 1;
    int seged = 0;
    for(int i = 0; i < 10; i++)
    {
        if(tomb[i]<=tomb[j])
        {
            seged++;
        }
        else
        {
            seged--;
        }
        j++;

    }
    if (seged == darab)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int tomb[10];
    int darab=0;
    printf("\nA szamok: \n");
    for (int i = 1; i < 11; i++)
    {
        printf("%d. szam: ",i);
        scanf("%d",&tomb[i]);
        darab++;
    }

    (rendezette(tomb,darab) == 1) ? printf("\nEz a tomb rendezett!") : printf("\nEz a tomb nem rendezett!");
    
    


    return 0;
}