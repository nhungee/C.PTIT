#include <stdio.h>
#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)

int l1, r1, l2, r2, k;

int check(int k){
		for(int i = max(l1, l2); i <= min(r1, r2); i++){
			if(i == k){
				return 1;
			}
		}
		return 0;	
	}

int main(){
	scanf("%d%d%d%d%d", &l1, &r1, &l2, &r2, &k);
	if(min(r1, r2) < max(l1, l2)) printf("0");
	else{
		if(check(k)){
			printf("%d ", min(r1, r2) - max(l1, l2) );
		}else printf("%d ", min(r1, r2) - max(l1, l2) + 1);

	}
	return 0;
}