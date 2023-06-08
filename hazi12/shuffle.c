#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"
#include <time.h>

void shuffle(int n, int tomb[])
{
    int min = 0;
    int max = n;
    for (int i = 0; i < n; i++)
    {
        int j = rand() % (max - min + 1) + min;
        int seged = tomb[j];
        tomb[j] = tomb[i];
        tomb[i] = seged;
    }

}

int main()
{

    int tomb[] = {10, 13, 45, 56, 93, 120};
    int meret = sizeof(tomb) / sizeof(tomb[0]);
    srand(time(NULL));
    puts("\nELOTTE: ");
    for (int i = 0; i < meret; i++)
    {
        printf("%d\t", tomb[i]);
    }

    shuffle(meret, tomb);
    puts("");
    puts("\nUTANA: ");
    for (int i = 0; i < meret; i++)
    {
        printf("%d\t", tomb[i]);
    }
    

    


    return 0;
}