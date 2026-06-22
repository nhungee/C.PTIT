#include <stdio.h>

void tsnt(int n){	
	for(int i = 2; i*i <= n; i++){
		int cnt = 0;
		while( n % i == 0){
			cnt++;
			n /= i;
		}
		if(cnt > 0) printf("%d(%d) ", i, cnt);
	}
	if(n > 1) printf("%d(1) ", n);
}

int main(){
	int t;
	scanf("%d", &t);
	int cnt = 1;
	while(t--){
		int n; 
		scanf("%d", &n); 
		printf("Test %d: ", cnt);
		tsnt(n);
		cnt++;
	}
	printf("\n");
	return 0;
}