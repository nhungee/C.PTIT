#include <stdio.h>

int main (){
	int n; 
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int vt;
	scanf("%d", &vt);
	
	for(int i = n - vt; i < n; i++) printf("%d ", a[i]);
	for(int i = 0; i < n - vt; i++) printf("%d ", a[i]);
}