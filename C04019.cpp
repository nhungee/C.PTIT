#include <stdio.h>

int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int b[10];
		for(int i = 0; i < 10; i++){
			b[i] = 0;
		}
		int max = 0;
		for(int i = 0; i < n ; i++){
			b[a[i]]++;
		}
		for(int i = 0; i < 10 ; i++){
			if(b[i] > max) max = b[i];
		}
		for(int i = 0; i < n ; i++){
			if(b[a[i]] == max){
				int check = 1;
				for(int j = i-1; j >= 0; j--){
					if(a[j] == a[i]) check = 0;
				}
				if(check) printf("%d ", a[i]);
			}
		}
//		for(int i = 0; i < 10 ; i++){
//			if(b[i] == max) printf("%d ", i);
//		}
		printf("\n");
	}
	
}