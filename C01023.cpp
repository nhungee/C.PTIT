#include <stdio.h>
 
int max(long long n){
 	int max1 = 0;
 	while(n > 0){
 		if(n % 10 > max1){
 			max1 = n % 10;
		}
		n /= 10;
	}
	return max1;
}
int min(long long n){
 	int min1 = 10;
 	while(n > 0){
 		if(n % 10 < min1){
 			min1 = n % 10;
		}
		n /= 10;
	}
	return min1;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		long long x;
		scanf("%lld", &x);
		printf("%d ", max(x));
		printf("%d\n", min(x));
	}
}
//int main(){
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		long long n;
//		scanf("%lld", &n);
//		int max = 0, min = 10;
//		while(n > 0){
//			if(n % 10 < min){
//				min = n % 10;
//			}	
//			if(n % 10 > max){
//				max = n % 10;
//			}
//			n /= 10;
//				
//		}
//		printf("%d ", max);
//		printf("%d\n", min);
//	}
//	return 0;
//}