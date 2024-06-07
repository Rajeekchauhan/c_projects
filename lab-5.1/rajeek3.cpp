#include<stdio.h>
main(){
	
	int maths[100];
	printf("Enter maths marks:");
	scanf("%d",&maths);
	
	int english[100];
	printf("Enter english marks:");
	scanf("%d",&english);
	
	int science[100];
	printf("Enter science marks:");
	scanf("%d",&science);
	
	int total=maths[0]+english[0]+science[0];
	printf("your total marks is:-%d\n",total);
	
	
	float pr=total/3;
	printf("your pr is:-%.2f",pr);
	
	
}