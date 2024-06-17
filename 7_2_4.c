#include<stdio.h>
/*

1 0 1 0 1
  0 1 0 1
	1 0 1
	  0 1
		1

1 2 3 4 5
  2 3 4 5
  	3 4 5
  	  4 5
  	    5

*/
main()
{
	int i,s,j;
	
	for(i=1;i<=5;i++)
	{
		for(s=1;s<i;s++)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			if(j%2==1)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}