#include <stdio.h>

int a[1000001];
void snt(){
	for(int i = 0; i < 1000001; i++) {
		a[i] = 1;
	}
	a[0] = 0; a[1] = 0;
	for(int i = 2; i*i <= 1000000; i++){
		if(a[i]){
			for(int j = i*i; j <= 1000000; j+=i){
				a[j] = 0;
			}
		}
	}
}

int main(){
	snt();
	int n;
	int dem = 0;
	scanf("%d", &n);
	for(int i = 0; i <= 1000000 && dem < n; i++){
		if(a[i]){
			printf("%d\n", i);
			dem++;
		}
	}
	return 0;
}