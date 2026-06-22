#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int du, a = 1;
	while(n > 0){
		du = n % 10;
		a *= du;
		n /= 10; 
	}
	printf("%d", a);
	printf("\n");
	return 0;
}