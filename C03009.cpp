#include <stdio.h>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

int check(int n){
	int sum = 1; 
	
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			sum += i; 
			if(i != n/i) sum += n/i;
		}
	}
	if(n == 1) return 0;
	if(sum == n) return 1;
	
	return 0;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = min(a, b); i <= max(a,b); i++){
		if(check(i)) printf("%d ", i);
	}
}