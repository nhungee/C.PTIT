#include <stdio.h>

int main(){
	int t, stt = 1; 
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		printf("Test %d:\n",stt);
		stt++;
		
		for(int i = 0; i < n; i++){
			int check = 0;
			for(int j = 0; j < i; j++){
				if(a[j] == a[i]){
					check = 1; 
					break;
				}
			}
			if(!check){
				int dem = 0;
				for(int j = 0; j < n; j++){
					if(a[i] == a[j]){
						dem++;
						
					}
					
				}
				
				printf("%d xuat hien %d lan\n", a[i], dem);
			}
		}
	}
}