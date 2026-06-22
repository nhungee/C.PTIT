#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long tmp = n;
		long long d; 
		int ok = 1;
		if(tmp % 2 != 0) ok = 0;
		while(n > 0){
			d = n % 10;
			if(d % 2 != 0){
				ok = 0;
			}
			n /= 10;
		}
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}