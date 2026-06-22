#include <stdio.h>

int thuaso(int n){
	int sum = 0;
	for(int i = 2; i*i <= n; i++){
		while(n % i == 0){
			sum += i;
			n/=i;
		}
	}
	if(n > 1) sum += n;
	return sum;
}

int chuso(int n){
	int d , sum = 0;
	while(n > 0){
		d = n % 10;
		sum += d;
		n /= 10;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	if(chuso(n) == thuaso(n)) printf ("YES\n");
	else printf("NO\n");
}