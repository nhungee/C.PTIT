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
		int x = 0, hang = 0;
		for(int i = 0; i < n; i++){
			int sum = 0;
			for(int j = 0; j < m; j++){
				sum += a[i][j];
			}
			if(hang < sum) {
				hang = sum;
				x = i;
			}
		}
		
		int cot = 0, y = 0;
		for(int j = 0; j < m; j++){	 
		 	int sum = 0;
			for(int i = 0; i < n; i++){
				if(i == x) {
					continue;
				}
				sum += a[i][j];
			}
			if(cot < sum) {
				cot = sum;
				y = j;
			}	
		}
		
		// Duyệt từng phần tử mảng b để in ra mảng sau khi xóa hàng và cột tổng lớn nhất
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(i == x || j == y) {
					continue;
				}
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		
		cnt++;
	}
}