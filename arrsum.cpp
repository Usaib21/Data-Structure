#include<stdio.h>
int main()
{
	int arr[]= {1,3,6,9};
	int i;
	int sum=0;
	int size = sizeof arr/sizeof arr[0];
	printf("size of arr is %lu and size of arr[0] is %lu \n",sizeof arr,sizeof arr[0]);
	for(i = 0; i < size ; i++){
		sum =sum + arr[i];	
	}
	printf("the sum of arr is %d",sum);
return 0;	
}
