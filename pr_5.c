#include<stdio.h>

int main(){
	
	int n;
	printf("Enter a number of array:");
	scanf("%d",&n);
	
	int a[n][n],i,j,sum=0;
	
	for(i=0; i<n; i++){

		for(j=0; j<n; j++){
			
			printf("enter a number:");
			scanf("%d",&a[i][j]);
		}
		
	}
	
	for(i=0; i<n; i++){

		for(j=0; j<n; j++){
			
			printf("%d ",a[i][j]);
				
		}
		
		printf("\n");
	
	}
	for(i=0; i<n; i++){
		
		sum =0;

		for(j=0; j<n; j++){
				
			sum =sum+a[i][j];
		}
		
		printf("\n");
		printf(" number of row is %d",sum);
	
	}
	
	return 0;
}
