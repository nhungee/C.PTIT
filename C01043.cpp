#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int sonhap = n;
	int d, p  = 0, Strong = -1;
	int a[6];
	for(int i = 0; i <= 6; i++) a[i] = 0;
	while(n){
		d = n % 10;
		a[p] = d;
		p++;
		n /= 10;
	}
		for(int i = p; i >= 0; i--){
			int giaithua = 1;
			int b = a[i];
			for(int j = b; j > 0; j--){
				giaithua *= j;			
			}
			Strong += giaithua;
		}
	if(Strong == sonhap){
		printf("1");
	}else printf("0");
	return 0;
}
