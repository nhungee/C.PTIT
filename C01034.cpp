#include <stdio.h>
#include <math.h>

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
    double a = ceil(sqrt(m)), b = floor(sqrt(n));
    int dem;
		dem = b - a + 1;
		printf("%d\n", dem);
	for(int i = a; i <= b; i++){
		printf("%d\n", i*i);
	}
	return 0;
}