#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j==i||j==(2*5-i))
				printf("%d",j);
			else if(i==1)
				printf("%d",j);
			else
				printf(" ");
		}
		printf("\n");

	}
}





