#include <stdio.h>


int ktrsnguyento(long long n){
	for(int i = 2; i*i < n; i++){
		if(n % i == 0){
			return 0;	
		}
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long x;
		scanf("%d", &x);
		long long snt = ktrsnguyento(x);
		if(snt == 1){
			printf("YES\n");
		}else printf("NO\n");
		}
	return 0;
}

