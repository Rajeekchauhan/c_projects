#include <stdio.h>


// deceleration

int sum(int a){

    int result = a*a ;

    return result;

}


int main(){

    int a,b;

    printf("Give two value : ");
    scanf("%d",&a);


    // function call
     int add = sum(a);


    printf("%d",add);

    return 0;

}
