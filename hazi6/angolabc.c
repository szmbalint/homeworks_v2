#include <stdio.h>
#include "prog1.h"
#include <string.h>
#define size 55

void feltolt(char tomb[])
{
	for(int i = 0; i< 26;i++)
	{
		tomb[i] = 'a' + i;
	}
	
	 
}

int main()
{
	
	char tomb[size];
	feltolt(tomb);
	for(int i = 0;i<26;i++)
	{
		printf("%c ",tomb[i]);
		
	}
	
	
	
	return 0;
}