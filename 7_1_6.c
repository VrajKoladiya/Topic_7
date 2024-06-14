#include<stdio.h>
/*

1 0 1 0 1
1 0 1 0
1 0 1
1 0
1

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/
main()
{
	int i, j;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
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