#include <stdio.h>

int a[100001];

void sang(){
	for (int i = 2; i < 100001; i++){
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for(int i = 2; i*i < 100001; i++){
		if(a[i]){
			for(int j = i*i; j < 100001; j +=i){
				a[j] = 0;
			}
		}
	}
}

int reciprocal(int n){
	
	int b = n;
	int d , kq = 0;
	while(n > 0){
		d = n % 10;
		kq = kq*10 + d;
		n /= 10;	
	}
	if(kq == b){
		return 1;
	}
	return 0;
}

int main(){
	sang();
	int t;
	scanf("%d", &t);
	while(t--){
		int m, n;
		scanf("%d%d",&m, &n);
		int cnt = 0;
		for(int i = m; i <= n; i++){
			if(a[i] && reciprocal(i)) {
				cnt++;
				printf("%d ", i);
			}
			if (cnt == 10){
				printf("\n");
				cnt = 0;
			}
		}
		printf("\n\n");
		
	}
	
}