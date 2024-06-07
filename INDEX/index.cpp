#include<stdio.h>
main(){
	
	char x[128];

  printf("enter your name:-");
  scanf("%[^\n]s",&x);
  printf("you have entered:-%s\n",x);

	int marks[5];
	printf("enter your maths marks:-");
	scanf("%d",&marks[0]);
	 
	printf("enter your english marks:-");
	scanf("%d",&marks[1]);
	
	printf("enter your science marks:-");
	scanf("%d",&marks[2]);
	
	printf("enter your economics marks:-");
	scanf("%d",&marks[3]);

	printf("enter your gujrati marks:-");
	scanf("%d",&marks[4]);

    int sum = marks[0]+ marks[1] + marks[2] + marks[3]+ marks[4];
	printf("your total marks:-%d\n ",sum);
	
	float pr = sum/5;
	printf("your pr is:-%.2f",pr);
	
}