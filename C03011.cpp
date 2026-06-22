#include <stdio.h>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

int giaithua(int n){
	int gt = 1;
	while(n > 0){
		gt *= n;
		n--;
	}
	return gt;
}

int check(int n){
	int tmp = n;
	int sum = 0; 
	int d ; 
	while(n > 0){
		d = n % 10;
		sum += giaithua(d);
		n /= 10;
	}
	if(sum == tmp) return 1;
	return 0;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = min(a, b); i <= max(a, b); i++){
		if(check(i)) printf("%d ", i);
	}
}