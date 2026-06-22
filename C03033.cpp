#include <stdio.h>

void tsnt(int n){	
	int first = 1;
	for(int i = 2; i*i <= n; i++){
		int cnt = 0;
		
		while(n % i == 0){
//			if(cnt == 0) printf("%d", i);
			cnt++;
			n /= i;
		}
		if(cnt > 0){
			if(!first)printf(" * ");
			printf("%d^%d",i, cnt);
			first = 0;
		} 		
	}
	if(n > 1) {
		if(!first)printf(" * ");
		printf("%d^1",n );
	}
}

int main(){
	int t;
	scanf ("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf ("%d=", n);
		tsnt(n);
		printf("\n");
	}
}