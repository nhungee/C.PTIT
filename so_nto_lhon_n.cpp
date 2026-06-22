 //Tìm số nguyên tố nhỏ nhất lơn hơn N
#include <stdio.h>
#include <math.h>

int isPrime(int n){
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	scanf("%d", &n);
    for(int i = n + 1; ; i++){
    	if(isPrime(i)){
    		printf("%d", i);
    		break;
		}
	}
	
	int cur = n+1;
	while(1){
		if(isPrime(cur)){
			printf("%d", cur);
			break;
		}
		cur++;
	}
}
