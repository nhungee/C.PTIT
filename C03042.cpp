#include <stdio.h>

int sogiam(int n){
	if(n < 10) return 0;
	int vt = 0;
	int a[11];
	while(n > 0){
		a[vt] = n % 10;
		vt++;
		n /= 10;
	}
//	a[vt] = 0;
	for(int i = 0; i < vt; i++){
		if(a[i] >= a[i+1]) return 0;
	}
	return 1;
}

int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int cnt = 0;
		for(int i = a; i <= b; i++){
			if(sogiam(i)) cnt++;
		}
		printf("%d\n", cnt);
	}
}