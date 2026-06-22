#include <stdio.h>

int main(){
	int m, n, p, q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	int a[m][n], b[n][p], c[p][q];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(int i = 0; i < p; i++){
		for(int  j = 0; j < q; j++){
			scanf("%d", &c[i][j]);
		}
	}
	int d1[m][p];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			d1[i][j] = 0;
			for(int k = 0; k < n; k++){
				d1[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	int d2[m][q];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < q; j++){
			d2[i][j] = 0;
			for(int k = 0; k < p; k++){
				d2[i][j] += d1[i][k]*c[k][j];
			}
			printf("%d ", d2[i][j]);
		}
		printf("\n");
	}
	return 0;
}