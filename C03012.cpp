#include <stdio.h>


void fibonacci(int n){ 
	int a = 0, b = 1, c;
	if(n == 0 || n == 1) printf("1");
	while(b < n){
		c = b + a;
		a = b; 
		b = c;
	}
	if(b == n) printf("1");
	else printf("0");
}
int main(){
	int n ; 
	scanf("%d", &n);
	fibonacci(n);
}