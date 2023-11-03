#include<stdio.h>
main()
{
	int i,j,a1[3][3],a2[3][3],sub[3][3];
	
	printf("\n..............Array............");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n\t INPUT ELEMENT  [%d] [%d] :",i,j);
			scanf("%d",&a1[i][j]);
		} 
		printf("\n");
	}
	
		printf("\n..............Array-2............");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n\t INPUT ELEMENT  [%d] [%d] :",i,j);
			scanf("%d",&a2[i][j]);
		} 
		printf("\n");
	}
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sub[i][j]=a2[i][j]*a1[i][j];
	
		} 
	}
	
		printf("\n..............Substraction of two array............\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",sub[i][j]);
	
		} 
		printf("\n");
	}
}
