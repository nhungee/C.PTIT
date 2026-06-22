#include <stdio.h>

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int a[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);	
		}
	}
	int b, c;
	scanf("%d%d", &b, &c);
	b--;
	c--;

	for(int i = 0; i < m; i++){
		int temp = a[i][b];
		a[i][b] = a[i][c];
		a[i][c] = temp;
	}
	

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}