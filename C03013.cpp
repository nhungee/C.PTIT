#include <stdio.h>

void finabocci(int n){
	int f[100];
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i < 100; i++ ){
		f[i] = f[i-1] + f[i-2];
	}
	for(int i = 0 ; i < n; i++){
		printf("%d ", f[i]);
	}
}

int main(){
	int n;
	scanf("%d", &n); 
	finabocci(n);
}