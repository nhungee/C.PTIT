#include <stdio.h>
const int N = 1e7+7;
int isPrime[(int) N];
int snt[100000];

void primeSieve(){
	int ind = 0;
	for(int i = 2; i * i <= N; ++i){
		if(!isPrime[i]){
			for(int j = i*i; j < N; j += i){
				isPrime[j] = 1;		
			}	
			snt[ind++] = i;
		}
	}
}

int main(){
	primeSieve();
	for(int i = 0; i < 100; ++i){
		printf("%d ", snt[i]);
	}
//	int n;	
//	scanf("%d", &n);
//	for(int i = 0; i < N; ++i){
//		if(snt[i] > n){
//			printf("%d", snt[i]);
//			break;
//		}
//	}
}