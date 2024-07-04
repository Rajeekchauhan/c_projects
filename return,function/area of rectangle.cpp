#include <stdio.h>


// deceleration

int sum(int l,int w){

    int result = l*w ;

    return result;

}


int main(){

    int a,b;

    printf("Give two value : ");
    scanf("%d %d",&a,&b);


    // function call
     int add = sum(a,b);


    printf("%d",add);

    return 0;

}
