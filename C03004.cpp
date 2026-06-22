#include <stdio.h>

int USCLN(int a, int b){
	while(b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long BSCNN(int a, int b){
	return (a/USCLN(a, b))*b;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", USCLN(a, b));
	printf("%lld\n", BSCNN(a, b));
}

//#define min(a, b) (a < b ? a : b)
//#define max(a, b) (a > b ? a : b)
//
//void USCLN(int a, int b){
//	for(int i = min(a, b); i >= 0 ; i--){
//		if(a % i == 0 && b % i == 0){
//			printf("%d\n", i);
//			break;
//		}
//	}	
//}
//
//void BSCNN(int a, int b){
//	int i = max(a, b);
//	while(1){
//		if(i % a == 0 && i % b == 0){
//			printf("%d\n", i);
//			break;
//		}
//		i++;
//	}	
//}
//
//int main(){
//	int a, b;
//	scanf("%d%d", &a, &b);
//	USCLN(a, b);
//	BSCNN(a, b);
//}




//int main(){
//	int a , b;
//	scanf("%d%d", &a, &b);
//	
//	for(int i = min(a, b); i >= 0 ; i--){
//		if(a % i == 0 && b % i == 0){
//			printf("%d\n", i);
//			break;
//		}
//	}
//	
//	int i = max(a, b);
//	while(1){
//		if(i % a == 0 && i % b == 0){
//			printf("%d\n", i);
//			break;
//		}
//		i++;
//	}
//	return 0;
//}