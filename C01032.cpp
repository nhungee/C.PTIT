#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long gt = 1;
		for(int i = 2; i * i <= n; i++){
			if(n % i ==0){
				while(n % i == 0){
					n /= i;
				}
				gt *= i;
		}
		}
		if(n > 1){
			gt *= n;
		}
		printf("%lld", gt);	
		printf("\n");	
	}
	return 0;
}