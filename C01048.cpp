#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int d, chan = 0, le = 0;
	while(n > 0){
		d = n % 10;
		n /= 10;
		if(d % 2 != 0) {
			le++;
		}
		if(d % 2 == 0){
			chan++;
		}
	}
	printf("%d ", le);
	printf("%d", chan);
	return 0;
}