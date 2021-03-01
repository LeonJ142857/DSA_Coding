//
// Created by user on 27/02/2021.
//

#include<stdio.h>
#include<string.h>
int main()
{
	char thing[7][25];
	for(int i=0; i<5; i++)
	{
		getchar();
		scanf("%s", thing[i]);
	}
	for(int i=0; i<5; i++)
	{
		printf("%s", thing[i]);
		getchar();
	}


	return 0;
}