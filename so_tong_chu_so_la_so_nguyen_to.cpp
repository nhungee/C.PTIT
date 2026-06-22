// Liệt kê các số có tổng chữ số là số nguyên tố trong đoạn [1, N]

#include <stdio.h>

int isPrime(int n){
	if(n < 2 ) return 0;
	for(int i = 2; i*i <= n; i++){
		if(n % i  == 0){
			return 0;
		}	
	}
	return 1;
} 

int main(){
	int n; 
	scanf("%d", &n);
	int p;
	for(int i = 1; i <= n; i++){
		int j = i;
		int s = 0;
		while(j>0){
				p = j % 10;
				s += p;
				j /= 10;	
		}
		if(isPrime(s)){
			printf("%d ", i);
		}	
	}
	
	return 0;
}
