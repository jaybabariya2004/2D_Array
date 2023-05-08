#include<stdio.h>

int main(){
	
	int  a[] = {1,2,3,4,5,6,7};
	
	int length = sizeof(a) / sizeof(a[0]);
	
	printf("Lenghth of array = %d",length);
	
	return 0;
}
