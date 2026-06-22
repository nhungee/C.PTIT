#include <stdio.h>

int a[100000] = {0};
void sang(){
	for(int i = 0; i*1 < 100000; i++){
		a[i] = 1;
	}
	for(int i = 2; i*i < 100000; i++){
		if(a[i]){
			for(int j = i*i; j < 100000; j +=i){
				a[j] = 0;
			}
		}
	}
}


int main(){
	int t;
	scanf("%d", &t);
	int cnt = 1;
	sang();
	while(t--){
		int n; 
		scanf("%d", &n);	
		int b[n][n];
		
		printf("Test %d:\n", cnt);
		
		int val = 0;
		int number = 2;
		int top = 0, bottom = n-1;
		int left = 0, right = n-1;
		
		while(val < n*n){
	
			for(int i = left; i <= right; i++){	
				while(!a[number]) number++;													
				b[top][i] = number++;
				val++;															
			}
			top++;
					
			for(int i = top; i <= bottom ; i++){	
				while(!a[number]) number++;				
				b[i][right] = number++;
				val++;						
			}
			right--;
			
							
			for(int i = right; i >= left ; i--){
				while(!a[number]) number++;						
				b[bottom][i] = number++;
				val++;
			}
			bottom--;	
							
			for(int i = bottom; i >= top; i--){
				while(!a[number]) number++;	
				b[i][left] = number++;
				val++;
			}
			left++;	
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%d ", b[i][j]);
			}
			printf("\n");
		}

		cnt++;
	}
}