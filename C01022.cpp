#include <stdio.h>

int main (){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, tong = 0;
		scanf("%d", &n);
		while(n > 0){
			tong += n % 10;
			n /= 10;
		} 
		printf("%d\n", tong);
	
	}
	return 0;
}