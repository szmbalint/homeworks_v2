#include <stdio.h> 
#include <string.h> 

void line(char c, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%c",c);
    }
    
}

int main()
{

    printf("hello\n");
    line('-', 40);
    printf("\nworld");

    return 0;
}
