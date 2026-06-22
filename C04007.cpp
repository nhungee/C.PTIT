#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n], b[m]; 
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	int t; 
	scanf("%d", &t);
	for(int i = 0; i < t; i++) printf("%d ", a[i]);
	for(int i = 0; i < m; i++) printf("%d ", b[i]);
	for(int i = t; i < n;i++) printf("%d ", a[i]);
		
	printf("\n");
}