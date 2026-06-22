#include <stdio.h>

int main(){
	int n; 
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	long long tong = 0;
	for(int i = 0; i < n; i++){
		tong += a[i];
	}
	printf("%.3f", (double)tong/n);
	return 0;
}