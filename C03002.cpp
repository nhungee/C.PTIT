#include <stdio.h>
#include <math.h>

int ktrsnguyento(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main() {
	int x;
	
	scanf("%d", &x);
	for(int i = 2; i < x; i++){
		if(ktrsnguyento(i)){
			printf("%d\n", i);			
		}
	}
	return 0;
}