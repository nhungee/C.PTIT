#include <stdio.h>

int  snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n; 
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &sa[i]);
	}
	int b[n], cnt = 0;
	for(int i = 0; i < n; i++){
		if(snt(a[i])){
			b[cnt] = a[i];
			cnt++;	
		}
	}
	printf("%d ", cnt);
	for(int i = 0; i < cnt; i++){
		printf("%d ", b[i]);
	}
	return 0;
}