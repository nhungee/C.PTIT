#include <stdio.h>
#include <string.h>

int check(char n[]){
	int N = strlen(n);
	int j = N-1;
	int sum = 0;
	if(n[0] != '8' && n[N-1] != '8') return 0;
	else{
		for(int i = 0; i < N; i++){
			if(n[i] != n[j]){
				return 0;
				break;
			}else{
				j--;
				sum += n[i]-'0';
			}
		}
		if(sum % 10 != 0) return 0;
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
}