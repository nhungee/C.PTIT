#include <stdio.h>

int f[1000006];
void sang(){
	for(int i = 2; i < 1000006; i++){
		f[i] = 1; 
	}
	f[0] = f[1] = 0;
	for(int i = 2; i*i <= 1000006; i++){
		if(f[i]){
			for(int j = i*i; j < 1000006; j+=i){
				f[j] = 0;
			}
		}
	}	
}

int chuso(int n){
	int d;
	while(n > 0){
		d = n % 10;
		if(!f[d]) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	sang();
	int t ;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int cnt = 0;
		for(int i = a; i <= b ; i++){
			if(f[i] && chuso(i)) cnt++;
		}
		printf("%d\n", cnt);
	}
}