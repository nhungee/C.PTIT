#include <stdio.h>

int check(long long n){
	int d;
	long long res = 0;
	long long sum = 0;
	long long tmp = n;
	while(n> 0){
		d = n % 10;
		if(d % 2 == 0) return 0;
		else{
		sum += d;
		res = res*10 + d;
		}
		n /= 10;
	}
	if(sum % 2 == 0) return 0;
	else{
		if(res != tmp) return 0;
	}
	return 1;
}

int main(){
	int t ; 
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}