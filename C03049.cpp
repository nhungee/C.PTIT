#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int chan = 0, le = 0, du;
		if(n % 2 == 0){
		printf("NO\n");
		continue;
		}
		while(n > 0){
			du = n % 10;
			n /= 10;
			if(du % 2 == 0) chan++;
			else le++;
		}
	if(chan < le) printf("YES\n");
	else printf("NO\n");
	}
	return 0;
}