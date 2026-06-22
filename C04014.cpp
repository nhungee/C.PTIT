#include <stdio.h>

int main (){
	int n; 
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n; i++){
		int  check = 0;
		for(int j = 0; j < i; j++){
			if(a[i] == a[j]){
				check = 1;
				break;
			}
		}

		if(!check){
			int dem = 1;
			for(int j = i+1; j < n; j++){
				if(a[i] == a[j]){
					dem++;
				}
			
			}
			printf("%d %d\n", a[i], dem);
		}
	}		
}