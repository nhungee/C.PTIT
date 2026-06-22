#include <stdio.h> 

int main (){ 
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int a[18];
		int vt = 0;
		int check = 1;
		while(n > 0) {
			int i = n % 10;
			if(i != 0 && i != 9 && i != 8 && i != 1){
				check = 0;
				break;
			}
			else if(i == 1) {
				a[vt] = 1;
			} else {
				a[vt] = 0;
			}
			vt++;
			n /= 10;	 
		}
		if(check) {
			while(vt >= 0 && a[vt - 1] == 0) {
				vt--;
			}
			if(vt < 0){
				printf("INVALID");
			}
			else{
				for(int i = vt-1; i >= 0; i--){	
					printf("%d", a[i]);
				}
			}
		} else {
			printf("INVALID");
		}
		printf("\n");
	}
	return 0;
}