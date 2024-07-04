#include<stdio.h>

int sum(int a,int b,int c,int d,int e){
	
	int result=a+b+c+d+e;
	
	return result;
	
}
int main(){
	
	int a;
	int b;
	int c;
	int d;
	int e;
	
	printf("english:- ");
	scanf("%d",&a);
	
	printf("gujrati:- ");
	scanf("%d",&b);
	
	printf("economics:- ");
	scanf("%d",&c);
	
	printf("computer:- ");
	scanf("%d",&d);
	
	printf("hindi:- ");
	scanf("%d",&e);
	
	int add =sum(a,b,c,d,e);
	
	printf("your total marks is :-  %d\n",add);
	
	float pr = add/5;
	printf("your parcentage is :-  %f",pr);
	
	return 0;
}