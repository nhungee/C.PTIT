#include <stdio.h>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

int s[10000];
void sang(){
	
	for(int i = 2; i < 10000; i++){
		s[i] = 1;
	}
	s[0] = s[1] = 0;
	for(int i = 2; i*i <= 10000; i++){
		if(s[i]){
			for(int j = i*i; j < 10000; j +=i){
				s[j] = 0;
			}
		}
	}
}


int finabocci(int n){
	int a = 0, b = 1, c;
	if ( n == 0 ||  n == 1)  return 1;
	while(b < n){
		c = a + b;
		a = b; 
		b = c;
	}
	if(b == n) return 1;
	return 0;
}

int sumcs(int n){
	int d;
	int sum = 0;
	while (n > 0){
		d = n % 10;
		sum += d;
		n /= 10;
	}
	if(finabocci(sum)) return 1;
	return 0;
}

int main(){
	sang();
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = min(a, b); i <= max(a, b); i++){
		if(sumcs(i) && s[i]) printf("%d ", i);
	}
}