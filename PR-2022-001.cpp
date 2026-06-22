//un = u1 + (n – 1)d 
#include <stdio.h>

int main(){
	int u0, d, N;
	scanf("%d %d %d", &u0, &d, &N);
	long long s = 0;
	for(int i = 1; i <= N; i++){
		s += u0 + (N-i)*d;
	}
	printf("%lld", s);
	
}
