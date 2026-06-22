#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	int cnt = 1;
	while(t--){
		int n;
		scanf("%d", &n);
		printf("Test %d:\n", cnt);
		int a[n][n];
		for(int i = 0; i < n; i++){
			int k = 1;
			for(int j = 0; j < n; j++){
				a[i][j] = k;
				k++;		
			}	
		}
		
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				a[i][j] = 0;	
			}
		}
		
		for(int i = 0; i < n; i++){
			int k = 1;
			for(int j = 0; j < n; j++){		
			}	
		}
		
		int b[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				b[i][j] = a[j][i];
			}	
		}
		
		int c[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				c[i][j] = 0;
				for(int k = 0; k < n; k++){
					c[i][j] += a[i][k]*b[k][j];
				}
			}	
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%d ", c[i][j]);
			}
			printf("\n");	
		}
		cnt++;
	}
}