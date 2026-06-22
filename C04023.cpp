#include <stdio.h>

void selectionSort(int a[], int n){
	for(int i = 0; i < n; i++){
		int cnt = i;
		for(int j = i+1; j < n; j++){
			if(a[j] < a[cnt]){
				cnt = j;
			}
		}
		int temp = a[i];
		a[i] = a[cnt];
		a[cnt] = temp;
	}
}

int main(){
	int n; 
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	selectionSort(a, n);
	for(int i = 0; i < n; i++) printf("%d ", a[i]);
}