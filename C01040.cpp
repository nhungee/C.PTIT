//#include <stdio.h>
//
//int main(){
//	int n;
//	scanf("%d", &n);
//	int tong = 0;
//	for(int i = 1; i < n; i++){
//		if(n % i == 0){
//			tong += i;
//		}
//	}
//	if(tong == n) printf("1");
//	else printf("0");
//	return 0;
//}
#include <stdio.h>

int main() {
    int n;
    int tong=0;
    int a;

    scanf("%d", &a);
for(int i=1;i<=a;i++)
{

    for (int j = 1; j < i; j++) {
        if (i % j == 0)
            tong += j;
    }

    if (tong == i)
        printf("%d\n",i);
        tong=0;
}

    return 0;
}