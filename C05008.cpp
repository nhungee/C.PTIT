#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	int cnt = 1;
	while(t--){
		
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n][m];
		for (int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", cnt);
		int hang = 0;
		int x ;
		for(int i = 0; i < n; i++){
			int sum = 0;
			for(int j = 0; j < m; j++){
				sum += a[i][j];
				//printf("%d ", sum);
			}
			if(hang < sum) {
				hang = sum;
				x = i;
			}
		}
//		
//		int b[n][m];
//		for(int i = 0; i < n; i++){
//			for(int j = 0; j < m; j++){
//				if(x == i){
//					continue;
//				}
//				b[i][j] = a[i][j];
//			}
//		}
			
		int cot = 0, y ;
		for(int j = 0; j < m; j++){	 
		 	int sum = 0;
			for(int i = 0; i < n; i++){
				if(i == x) continue;
				sum += a[i][j];
			//	printf("%d ", sum);
			}
			if(cot < sum) {
				cot = sum;
				y = j;
			}	
		}
		//printf("%d\n", cot);
//		for(int i = 0; i < n; i++){
//			for(int j = 0; j < m; j++){
//				if(y == j && x ==i){
//					continue;
//				}
//				b[i][j] = a[i][j];
//			}
//		}
		for(int i = 0; i < n; i++){
			if (i == x) continue;
			for(int j = 0; j < m; j++){
				if( j ==y) continue;
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}

		cnt++;
	}
}