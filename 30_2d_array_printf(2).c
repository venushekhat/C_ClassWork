#include<stdio.h>
main()
{
	int arr[2][2]={10,20,30,40};
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<2;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n"); 
	}
}
