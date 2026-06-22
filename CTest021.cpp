#include <stdio.h>


int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}


int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int n ; 
		scanf("%d", &n);
		int a[n];
		int b[100000];
		for(int i = 0; i < 100000; i++){
			b[i] = 0;
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			if(snt(a[i])){
				b[a[i]] = b[a[i]] + 1;
			}
		}
		for(int i = 0; i < 100000; i++){
			if(b[i] > 0){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}