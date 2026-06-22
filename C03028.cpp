#include <stdio.h>

int main(){
	int n;
	scanf("%d", n);
	int a[n][n];
	int k = 0;
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < n; j++){
			if(j <= i) printf("%d", a[k]);
			else printf(" ");
		
		}
		printf("\n");
	}
}