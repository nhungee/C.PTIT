#include <stdio.h>

int check(long long n){
	long long b = n;
	int cnt = 0;
	while(n > 0){
		cnt++;
		n /= 10;
	}
	int a[cnt];
	for(int i = 0; i < cnt; i++){
		a[i] = b % 10;
		b /= 10;
	}

	int c[cnt];
	int vt = 0;
	for(int i = cnt-1; i >= 0; i--){
		c[i] = a[vt];
		vt++;
	}
	for(int i = 0; i < cnt; i++){
		if(a[i] != c[i]){
			return 0;
			break;
		}
	}
	return 1;
}

int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if (check(n)) printf("YES\n");
		else printf("NO\n");
	}
	printf("\n");
}
//int main(){
//	int t; 
//	scanf("%d", &t);
//	while(t--){
//		long long n;
//		scanf("%lld", &n);
//		long long b = n;
//		int cnt = 0;
//		while(n > 0){
//			cnt++;
//			n /= 10;
//		}
//		int a[cnt];
//		for(int i = 0; i < cnt; i++){
//			a[i] = b % 10;
//			b /= 10;
//		}
//
//		int c[cnt];
//		int vt = 0;
//		for(int i = cnt-1; i >= 0; i--){
//			c[i] = a[vt];
//			vt++;
//		}
//		int check = 1;
//		for(int i = 0; i < cnt; i++){
//			if(a[i] != c[i]){
//				check = 0;
//				break;
//			}else check = 1;
//		}
//		if (check == 0) printf("NO\n");
//		if(check == 1) printf("YES\n");
//	}
//	printf("\n");
//}


