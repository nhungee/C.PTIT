//#include <stdio.h>
//
//int main(){
//	int n;	
//	scanf("%d", &n);
//	long long S = 0;
//	for(int j = 1; j <= n; j++){
//		long long giaithua = 1;
//		for(int i = j ; i > 0; i--){
//			giaithua *= i;
//		}
//		S += giaithua;		
//	}
//	printf("%lld", S);
//	return 0;
//}

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long S = 0;
    long long giaithua = 1;

    for (int i = 1; i <= n; i++) {
        giaithua *= i;
        S += giaithua;
    }

    printf("%lld\n", S);
    return 0;
}