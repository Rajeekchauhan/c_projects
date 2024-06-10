#include<stdio.h>
#include<string.h>

main(){
	
	int var1 ,var2,var3,temp;
	
	
	scanf("%d",&var1);
	scanf("%d",&var2);
	scanf("%d",&var3);
	
	
	printf("var1=%d\n",var1);
	printf("var2=%d\n",var2);
	printf("var3=%d\n",var3);
	
	 temp=var1;
	 var1=var2;
	 var2=var3;
	 var3=temp;
	 
	 
	 	printf("reaverse var1=%d\n",var1);
	    printf("reaverse var2=%d\n",var2);
	    printf("reaverse var3=%d\n",var3);
	 
	
}