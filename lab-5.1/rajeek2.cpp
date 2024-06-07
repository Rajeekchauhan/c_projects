#include<stdio.h>
main(){
   
   int a;
   
   printf("enter a value of a:-");
   scanf("%d",&a);
   
   if(a<0){
         printf("This number is Negative:-");	
   }
   else if(a==0){
         printf("This number is Neutral:-");
	}
   else if(a>0){
         printf("This number is Positive:-");
	}


}


