#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
//	for(int i = 1; i <= n + n - 1; i++){
//		for(int j = 1 ; j <= 2*n - 1; j++){
//			printf("*");
//			if(1){
				for(int i = 1; i <= n; i++){
					for(int j = i ; j <= n - 1; j++){
						printf("~");
					}
					for(int j=0;j<n;j++){
						printf("*");
					}
					printf("\n");
				}
			}
//			else{
//				for(int i = n + n - 1; i <= 1; i++){
//					for(int j = i ; j <= n - 1; j++){
//						printf(" ");
//					}
//				}				
//			} 
	