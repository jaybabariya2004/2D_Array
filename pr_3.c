#include<stdio.h>

int main()
{
	int row,column;
	
	printf("Enter number of row   :");
	scanf("%d",&row);
	printf("enter number of column :");
	scanf("%d",&column);
	
	int a[row][column],i,j,count = 0,average,sum =0;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("Enter a [%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		} 
		printf("\n");
	}
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("%d ",a[i][j]);
			count++;
			sum = sum + a[i][j];
			average = sum / count;
		}  
		 printf("\n");
		 
	}
		printf("length of array : %d\n",count);
		printf("sum : %d\n",sum);
		printf("average : %d\n",average);
		
	
	return 0;
}

