#include <stdio.h>

int main (){
	int m, n;
	scanf("%d%d", &m, &n);
	int A[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &A[i][j]);
		}
	}
	int a, b;
	scanf("%d%d", &a, &b);
	a--;
	b--;
	int temp;
	for(int i =0; i < n; i++){
		temp = A[a][i];
		A[a][i] = A[b][i];
		A[b][i]= temp;
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}