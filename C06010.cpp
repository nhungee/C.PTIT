#include <stdio.h>
#include <string.h>

int check(char n[]){
	int N = strlen(n);
	for(int i = 0; i < N; i++){		
		if(n[i] % 2 != 0){
			return 0;
			break;
		} 		
		else{						
			if(n[i] != n[N-1]){
				return 0;
				break;
			}else N--;					
		}		
	}
	return 1;
}

int main(){
	int t; 
	scanf("%d", &t);
	getchar();
	while(t--){
		char n[500];
		gets(n);
		
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}