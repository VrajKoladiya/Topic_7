#include<stdio.h>
/*
		5
	  4 4
	3 3 3
  2 2 2 2
1 1 1 1 1
*/
main()
{
	int i,s,j;
	
	for(i=5;i>=1;i--)
	{
		for(s=i;s>1;s--)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	
}