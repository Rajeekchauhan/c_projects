#include<stdio.h>
main(){
	
	int money;
	printf("enter your pocket money:-");
	scanf("%d",&money);
	
         int milk,tea,suger;
         char name [128];
     
    if(money >=500){
    	printf("Welcome\n");

   }else{
   	printf("You have less money\n");
   }
   
      
         printf("enter your name:-\n");
         scanf("%s",&name);
         
    printf("enter a price of product:-\n");
	
	      printf("milk:-");
		  scanf("%d",&milk);
		  
		  printf("tea:-");
		  scanf("%d",&tea);    
	
	      printf("suger:-");
		  scanf("%d",&suger);
		  
	int total=milk+tea+suger;
	printf("your grand total:-%d\n",total);


       	if (money<=500){
	printf("thank you for shoping\n");
	
         }else{
    printf("sorry price is bigger than your pocket money");	
	} 
} 
