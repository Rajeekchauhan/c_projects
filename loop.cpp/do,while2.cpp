 #include<stdio.h>
 main(){
 	
 	int sum=0;
 	int num;
 	
 	do{
 		
 		printf("enter your number:-\n");
 		
 		scanf("%d",&num);
 		
 		sum+=num;
 		
 	}while(num>0);
 	
 	    printf("sum=%d",sum);
 	    
 	
 }