#include <stdio.h>
#include <string.h>


     main(){


    char str1[100] = "Hello";
    char str2[100] = "Hell";

    int result = strcmp(str1,str2); // 0 , 1


    if(result==1){
        printf("Two strings are not same"); //1
    }else{

        printf("Two strings are same"); // 0

    }


   return 0;
}