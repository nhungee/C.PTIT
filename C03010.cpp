#include <stdio.h>

int giaithua(int n){
	int gt = 1;
	while(n > 0){
		gt *= n;
		n--;
	}
	return gt;
}

int check(int n){
	int d;
	int tmp = n;
	int sum = 0;
	while(n > 0){
		d = n % 10;
		sum += giaithua(d);
		n/=10;
	}
	if(sum == tmp) return 1;
	return 0;
}

int main(){
	int n ; 
	scanf("%d", &n);
	for(int i = 1; i <= n ; i++){
		if(check(i)) printf("%d ", i);
	}
}