#include<stdio.h>
/*

5 4 3 2 1
  4 3 2 1
	3 2 1
	  2 1
		1

*/
main()
{
	int i,s,j;
	
	for(i=5;i>=1;i--)
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