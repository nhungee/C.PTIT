#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int d, chan = 0, le = 0;
		while(n > 0){
			d = n % 10;
			n /= 10;
			if(d % 2 == 0){
				chan++;
			}
			if(d % 2 != 0){
				le++;
			}
		}
		printf("%d %d", le, chan);
		printf("\n");
	}
	return 0;
}