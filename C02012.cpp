#include <stdio.h>

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	for(int i = 1; i <= m; ++i){
		if(i <= n){
			for(int j = i; j <= n; j++){
				printf("%d", j);
				if(i > 1){
					int dem = 0;
					for(int h = i-1; h >= 1;h--){
						printf("%d", h);
						dem++;
						if(h == 1){
							for(int k = h+1; k <= n - dem; k++){
								printf("%d", k);
							}
						}
					}
					break;
				}
			}

		}else{
			for(int j = i; j > i-n; j--){
				printf("%d", j);
			}
		}
		
		printf("\n");
	}
	return 0;
}
