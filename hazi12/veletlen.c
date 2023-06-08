#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "prog1.h"
#include <time.h>

int choice(const int n, const int tomb[])
{
    int also = 0;
    int felso = n;
    int index = rand() % (felso - also + 1) + also; 

    return index;
}

int main()
{
    int tomb[] = {45, 52, 101, 65, 22, 534};
    srand(time(NULL));

    int meret = sizeof(tomb) / sizeof(tomb[0]);
    printf("A tomb veletlenszeruen kivalasztott eleme: %d",tomb[choice(meret,tomb)]);


    return 0;
}