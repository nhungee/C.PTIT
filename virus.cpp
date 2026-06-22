#include <stdio.h> 

int main(){
	int n, d, dem = 0;
	scanf("%d", &n);
	for(int i = n; i > 0; i--){
		int ok = 1, m = i;
		while(m > 0){
			d = m % 10;
			if(d == 0 || d ==  1){
				ok = 1;
			}else ok = 0;
			m /= 10;
		}
		if(ok){
			dem++;
		}	
	}
	printf("%d", dem);
	return 0;
}