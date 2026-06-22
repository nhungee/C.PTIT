#include <stdio.h>
#include <math.h>

int a[10] = {0};
int b[10];

int snt(int n){
	if(n == 2 || n == 3 || n == 5 || n == 7){
		return 1;
	}
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	int m = n;
	int vt = 0, x = 0;
	while(m > 0){
		m /= 10;
		x++;
	}
	while(n > 0 && x > 0){
		int d = n / (int)pow(10, x-1);
		if(snt(d)){
			a[d]++;
			b[vt] = d;
			vt++;
		}
		n = n % (int)pow(10, x-1);
		x--;		
	}
	for(int i = 0; i <= vt-1; i++){
		int d = b[i];
		if(snt(d) == 1 && a[d] != 0){
			printf("%d %d\n", d, a[d]);
			a[d] = 0;
		}
	}
	return 0;
}


