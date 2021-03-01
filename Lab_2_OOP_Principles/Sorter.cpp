//
// Created by user on 27/02/2021.
//
#include<stdio.h>
#include<string.h>
int main()
{
	int T, i, j;
	printf("Input amount of data:");
	scanf("%d", &T);
	char name[T][100], num[T][10], temp[100], tmp[10];
	printf("Input Your Data\n");
	for(i=0; i<T; i++)
	{
//		getchar();
		scanf("%[^#]#%s", &name[i], &num[i]);
	}
	for(i=0; i<T; i++)
	{
		for(j=i+1; j<T; j++)
		{
			if(strcmp(name[i], name[j])>0)
			{
				strcpy(temp, name[i]);
				strcpy(tmp, num[i]);
				strcpy(name[i], name[j]);
				strcpy(num[i], num[j]);
				strcpy(name[j], temp);
				strcpy(num[j], tmp);
			}
		}
	}
	for(i=0; i<T; i++)
	{
		for(j=i+1; j<T; j++)
		{
			if(strcmp(name[i], name[j])==0 && strcmp(num[i], num[j])>0)
			{
				strcpy(temp, name[i]);
				strcpy(tmp, num[i]);
				strcpy(name[i], name[j]);
				strcpy(num[i], num[j]);
				strcpy(name[j], temp);
				strcpy(num[j], tmp);
			}
		}
	}
	for(i=0; i<T; i++)
	{
		printf("%d. %s %s\n", i+1, name[i], num[i]);
	}

	return 0;
}
