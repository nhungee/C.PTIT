#include <stdio.h>

int b[10000];

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0 ; i < n; i++){
		int check = 0; 
		for(int j = 0; j < i;j++){
			if(a[i] == a[j]){
				check = 1;
				break;
			}
		}
		if(check){
			b[a[i]] = 1;
		}	
	}
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(b[a[i]] == 0){
			dem++;
		}
		
	}
	printf("%d\n", dem);
	for(int i = 0; i < n; i++){
		if(b[a[i]] == 0){
			printf("%d ", a[i]);
		}
	}
}