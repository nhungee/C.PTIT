#include <stdio.h>

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	for(int i = 1; i <= m; ++i){
		if(i > n){
			for(int j = i; j > i-n; j--)
				printf("%d", j);
		}
		else{
			for(int j = i; j <= n; j++)
				printf("%d", j);
							
			for(int j = n-1; j > n-i; j--)
				printf("%d", j);
		}
		
		printf("\n");
	}
}