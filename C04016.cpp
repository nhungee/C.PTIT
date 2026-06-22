#include <stdio.h>


int snt(int n){ 
	if(n < 2) return 0; 
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}


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
		int temp;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] > a[j]){
				
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
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
				if(snt(a[i])){	
					printf ("%d xuat hien %d lan\n", a[i], dem);	
				}
				
			}
		}
		
	}
}