#include <stdio.h>
#define lm 2000000

int a[lm+1] = {0};

void sang(){
	for(int i = 2; i*i <= lm; i++){
	    for(int j = i*i; j <= lm; j += i){
	    if(a[j] == 0) a[j] = i;
		}
	}
	for(int i = 2; i <= lm; i++){
		if(a[i] == 0) a[i] = i;
	}
}

int main(){
	sang();
	int t; 
	scanf("%d", &t);
	long long sum = 0;
	while (t--){
		int n;
		scanf("%d", &n); 
		while(n > 1){
			sum += a[n];
			n /= a[n];
		}	
	}
	printf("%lld", sum);
	return 0;
}


//cach 1
//#include <stdio.h>
//
//int main(){
//	int t;
//	scanf("%d", &t);
//	long long giatri = 0;
//	while(t--){
//		int n;
//		scanf("%d", &n);
//		for(int i = 2; i*i <= n; i++){
//			if(n % i == 0){
//				while(n % i == 0){
//					giatri += i;
//					n /= i;
//				}
//			}
//		}
//			if(n > 1) {
//			giatri += n;	
//		}
//    }
//	printf("%lld", giatri);
//	return 0;
//}
