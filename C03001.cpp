#include <stdio.h>

int tong(int n){
	int sum = 0;
	while(n>0){
		sum += n % 10;
		n /= 10;	
	}
 	return sum;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int x;
		scanf("%d",&x);
		if(tong(x) % 10 == 0){
			printf("YES\n");
		} else{
			printf("NO\n");
		}
	}
	
	return 0;
} 