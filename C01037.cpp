#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int m = a > b ? a:b, n = a < b ? a:b;
	int tong = 0;
	for(int i = n; i <= m; i++){
		tong += i;
	}
	printf("%d", tong);
	printf("\n");
	return 0;
}