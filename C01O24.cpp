#include <stdio.h>

int palindromer(int n){
	int e, result = 0;
	while(n > 0){
		e = n % 10;
		n /= 10;
		result = result*10 + e;
	}
	return result;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	int sodau = n % 10;
//		printf("%d\n", sodau);
	int socuoi = palindromer(n) % 10;
//		printf("%d\n", socuoi);
	if(sodau == socuoi){
		printf("YES\n");
	}else printf ("NO\n");
	}
	return 0;
}