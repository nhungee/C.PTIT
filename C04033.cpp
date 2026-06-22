#include <stdio.h>

int main(){
	int n; 
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	for(int i = 0; i < n; i++){
		int check = 1;
		for(int j = i-1; j >= 0; j--){
			if (a[i] == a[j]){
				check = 0;
			}
		}

		if(check) printf("%d ", a[i]);
	}
	
}