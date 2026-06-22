#include <stdio.h>

int sumcs(int n){
	int d;
	int sum = 0;
	while( n > 0){
		d = n % 10;
		sum += d;
		n /= 10;
	}
	return sum;
}
void sapxep(int a, int b){
	if(sumcs(a) > sumcs(b)){
		int tmp = a;
		a = b;
		b = tmp;
	}
	printf("%d %d", a,b);
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	sapxep(a, b);
}