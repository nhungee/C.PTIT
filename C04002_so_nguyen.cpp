#include <stdio.h>
#include <math.h>

#define max 10000

int a[max] = {0};

void snt(){
	for(int i = 2; i <= max; i++){
		a[i] = 1;
	}
	for(int i = 2; i*i <= max; i++){
		if(a[i]){
			for(int j = i*i; j <= max; j+=i){
				a[j] = 0;
			}
		}
	}
}

int main(){
	snt();
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int b[n];	
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);	
			if(a[b[i]]){
				printf ("%d ", b[i]);
			}
		}
		printf("\n");	
	}
	return 0;
}