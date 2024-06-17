#include<stdio.h>
/*
		1
	  2 1
	3 2 1
  4 3 2 1
5 4 3 2 1
*/
main()
{
	int i,s,j;
	
	for(i=1;i<=5;i++)
	{
		for(s=5;s>i;s--)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
}