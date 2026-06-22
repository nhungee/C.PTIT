#include <stdio.h>

int palindrome(int n){
	int d;
	int res = 0;
	while(n > 0){
		d = n % 10;
		res = res*10 + d;
		n /= 10;
	}
	return res;
}

int ucln(int a, int b){
	while(b > 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(ucln(n, palindrome(n)) == 1) printf("YES\n");
		else printf("NO\n");
	}
}