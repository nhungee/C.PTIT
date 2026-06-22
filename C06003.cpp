#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int cnt = 0;
		for(int i = 1; i < strlen(c); i++){
			if(c[i] == ' ' && c[i-1] != ' '){
				cnt++;
			}
			
		}
		if(c[strlen(c)-1] != ' ') cnt++;
		printf("%d\n", cnt);
	}
}