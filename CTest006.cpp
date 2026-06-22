#include <stdio.h>

int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int a[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", snt(a[i][j]));
		}
		printf("\n");
	}
	return 0;
}