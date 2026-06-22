#include <stdio.h>

int isPrime(int n){
	if(n < 2) return 0;
	for(int i = 2; i*i <=n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n, p; 
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int j = i;
		int s = 0, h, check = 1;
		while (j > 0){
			p = j % 10;
			s += p;
			j /= 10;
			if(isPrime(p) == 0){
				check = 0;
			}
		}
		if(isPrime(s) && check && isPrime(i)) {
			printf("%d ", i);
		}

	}
	return 0;
}