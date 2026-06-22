#include <stdio.h>

#define min(a, b) a < b ? a:b

int main(){
	int n; 
	scanf("%d", &n); 
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int m = 1e9;
	for(int i = 0; i < n; i++){
		m = min (m, a[i]);
	}printf("%d ", m);
	int k = 1e9;
	for(int i = 0; i < n; i++){
		if(a[i] != m) k = min (k, a[i]);
	}printf("%d", k);
}