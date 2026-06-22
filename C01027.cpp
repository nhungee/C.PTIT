#include <stdio.h>
#include <math.h>

//int main(){
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		int a, b;
//		scanf("%d %d",&a, &b);
//	//	int M  = a > b ? a : b, m  = a < b ? a : b, du;
//		int M = 
//		for(int i = ; i > 0; i--){
//			if (M % i == 0 && m % i == 0){
//				printf("%d\n", i);
//				break;		
//			}
//    	}
//	}  
//
//	return 0;
//}


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int M  = a > b ? a : b, m  = a < b ? a : b, du;
		while(m != 0 && M != 0){
			M = M % m;
			if(M == 0){
				printf("%d\n", m);
				break;
			}
			m  = m % M;
			if(m  == 0){
				printf("%d\n", M);
			}
	
		}
	}
	return 0;
}