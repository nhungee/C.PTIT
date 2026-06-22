#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int a[18];
		for(int i = 0; i < 18; i++) a[i] = 0;
		int d, vt = 0;
		while(n > 0){
			d = n % 10;
			a[vt]= d;
			vt++;
			n /= 10;
		}
		int ok = 1;
		for( int i = vt; i > 0; i--){
			if(a[i-1] < a[i]){
				ok = 0;
				break;
			}
		}
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}