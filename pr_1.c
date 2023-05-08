#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter size of Array : ");
	scanf("%d",&n);
	
	int a[n][n],i,j;
	
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			
			printf("Enter  elements := ");
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0; i<n ; i++){
		
		for(j=0; j<n; j++){
			
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
