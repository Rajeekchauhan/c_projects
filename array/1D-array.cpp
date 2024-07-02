#include<stdio.h>

main(){
	
	int n;
	
	printf("enter the number of elements in array:-");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		printf("enter a element %d\n",i+1);
		scanf("%d",&arr[i]);
	}	
		for(int i=0; i<n; i++){
			printf("%d\n",arr[i]);
			
		}
	
}