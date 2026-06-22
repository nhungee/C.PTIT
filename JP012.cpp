#include <stdio.h>

int main(){
	int t; 
	scanf("%d", &t);
	long long F[93];
	F[1] = 1;
	F[2] = 1;
	for(int i = 3; i < 93; i++){
		F[i] = F[i-1] + F[i-2];
	}
	while(t--){
		int a, b;
 		scanf("%d%d", &a, &b);
		for(int i = a; i <= b; i++){
			printf("%lld ", F[i]);
		}
		printf("\n");
	}
}