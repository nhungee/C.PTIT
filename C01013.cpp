#include <stdio.h>

int main(){
	long long n;
	long long max = 0, min = 1e18 ;
	while(scanf("%lld", &n) != EOF){
		max	= max > n ? max : n;
		min = min < n ? min : n;
	}
	printf("%lld %lld", max, min);
	return 0;
}