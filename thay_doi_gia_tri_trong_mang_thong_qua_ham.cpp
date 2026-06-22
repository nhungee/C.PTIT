#include <stdio.h>
// thay doi gia tr? trong mang thong qua ham
 

void change (int a[], int n){
	for(int i = 0; i < n; i++){
		a[i] = 28;
	}
}

int main(){
	int m = 6;
	int b[6] = {1, 2, 3, 4, 5, 6};
	change(b, m);
	for(int i = 0; i < m; i++){
		printf("%d", b[i]);
	}
	return 0;
}