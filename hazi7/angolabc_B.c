#include <stdio.h>
#include "prog1.h"
#include <string.h>
#define size 26

void feltolt(char tomb[])
{
	for(int i = 0; i< 26;i++)
	{
		tomb[i] = 'a' + i;
	}
    tomb[27] = '\0';
    
	
	 
}

int main()
{
	char tomb[size+1];
    
	feltolt(tomb);
    
	printf("%s ",tomb);
	
	
    
	
	
	return 0;
}