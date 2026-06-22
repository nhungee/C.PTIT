#include <stdio.h>
#include <math.h>



int a[1000000+1];
void snt(){
	for(int i = 2; i <= 1000000; i++ ){
		a[i] = 1;
	}
	for(int i = 2; i*i<= 1000000; i++){
		if(a[i]){
			for(int j = i*i; j <= 1000000; j+=i){
				a[j] = 0;
			}
		}
	}
}

int main (){
	snt();
	int t;
	scanf("%d", &t);
	
	while(t--){
		int dem = 0;
		long long L, R;
		scanf("%lld %lld", &L, &R);
		for(int i = 2; i <= 1000000; i++){
			if(a[i]){
				long long square = (long long)i * i;
				if(square >= L && square <= R){
					dem++;
				}
				if(square > R) break;
			}
		}
		printf("%d\n", dem);
	}

	return 0;
}
//int ktsnt(long long n){
//	for(long long i = 2; i*i <= n; i++){
//		if(n % i == 0) return 0;
//	}
//	return 1;
//}
//
//
//int main(){
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		long long a, b;
//		scanf("%lld %lld", &a, &b);
//		int dem = 0;
//		for(int i = a; i <= b; i++){
//			
//			if(ktsnt(sqrt(i))){
//				dem++;
//			}
//		}
//		printf("%d", dem);
//	}
//	return 0;
//}




//int main(){
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		long long a, b;
//		scanf("%lld %lld", &a, &b);
//		int du = 0, ds = 0;
//		for(long long i = a; i <= b; i++){
//			for(long long j = i;j <= i; j++){
//				int du = 0, ds = 0;
//				if(i % j == 0){
//					du++;
//					if(du == 3){
//						ds++;
//					}
//				}
//			}
//		}
//		printf("%d\n", ds);
//	}
//	return 0;
//}