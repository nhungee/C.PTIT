#include <stdio.h>

#define max(a, b) a > b ? a : b

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		int m = 0;
		int check = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			m = max(m, a[i]);
		}
		printf("%d\n", m);
		for(int i = 0; i < n; i++){
			if(m == a[i]){
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}