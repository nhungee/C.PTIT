#include <stdio.h>

int ucln(int a, int b){
	while(b > 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int snt(int n ){
	if(n == 0 || n == 1) return 0;
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0 ) return 0;
	}
	
	
	
	
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a,&b);
		int n = ucln(a,b);
		int d ;
		int sum = 0;
		while( n > 0){
			d = n % 10;
			sum += d;
			n /= 10;
		}
		if(snt(sum)) printf("YES\n");
		else printf("NO\n");	
	}
}