#include <stdio.h>

void myFun(int *a,int *b,int *c,int *d){

    int mul = *a * 2;
    int div = *b / 2;
    int add = *c + 2;
    int sub = *d - 2;

    *a = mul;
    *b = div;
    *c = add;
    *d = sub;


}


int main(){

    int num1,num2,num3,num4;

    printf("Enter Two Numbers : ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);

    myFun(&num1,&num2,&num3,&num4);


    printf("%d %d %d %d",num1,num2,num3,num4);



    return 0;

}