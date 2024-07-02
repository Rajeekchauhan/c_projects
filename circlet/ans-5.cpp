#include<stdio.h>

main(){
	
	for(int i = 5; i>=1; i--){
		
		for(int x=1; x<=i; x++){
			printf(" ");
		}
		
		for(int j=i; j<=5; j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}