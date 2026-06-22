#include <stdio.h>

int main(){
	int t; 
	scanf("%d", &t);
	int cnt = 1;
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n][n];
		
		printf("Test %d:\n", cnt);
		
		int value = n*n;
		int top = 0, bottom = n-1;
		int left = 0, right = n-1;
		
		while(value >= 1){
			for(int i = left; i <= right; i++){
				a[top][i] = value--;
			}
			top++;
			
			for(int i = top; i <= bottom; i++){
				a[i][right] = value--;
			}
			right--;
			
			for(int i = right; i >= left; i--){
				a[bottom][i] = value--;
			}
			bottom--;
			
			for(int i = bottom; i >= top; i--){
				a[i][left] = value--;
			}
			left++;
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		
		cnt++;
	}
}