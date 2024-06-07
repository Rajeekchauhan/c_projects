#include<stdio.h>
#include<string.h>

main(){
	
	char a[128];
	printf("enter any string:-");
	scanf("%[^\n]s ", a);
	
	
		int l = strlen(a);
	
	for(int i=l;i>=0;i--){
		
	printf("index : %d is %c\n :",i,a[i]);	
		
		
	}
	

}
