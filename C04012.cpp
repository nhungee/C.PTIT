#include <stdio.h>

int b[10005];

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);	
	}

	for(int i = 0 ; i < n; i++){
		int check = 0;
		for(int j = 0 ; j < i; j++){
			if(a[i] == a[j]){
				check = 1;
				break;
			}
		}
		if(check) {
			b[a[i]] = 1;
		}
	}
	for(int i = 0; i < n; i++){
		if(b[a[i]]) {
			printf("%d ", a[i]);
			b[a[i]] = 0;
		}
	}
}
