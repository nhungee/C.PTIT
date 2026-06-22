#include <stdio.h>

int ucln(int a, int b){
	while(b > 0){
		int r = a % b;
		a = b; 
		b = r;
	}
	return a;
}

int bcnn(int a, int b){
	return (a/ucln(a, b)*b);
}

int main(){
	int t ;
	scanf("%d", &t);
	while (t--){
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%d ", bcnn(a, b));
		printf("%d ", ucln(a, b));
		printf("\n");
	}
}