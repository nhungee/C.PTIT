#include <stdio.h>
#include <string.h>

struct xau{
	char s1[101];
	int cnt;
};
typedef struct xau xau;


int palindrome(char n[]){
	int N = strlen(n) ;
	for(int i = 0; i < N/2; i++){
		if(n[i] != n[N-1-i]) return 0;
	}
	return 1;
}


int main(){	
	char s[50];
	xau x[1000];
	int n = 0;
	while(scanf("%s", s) != -1){
		int check = 0;
		if(palindrome(s)){
			for(int i = 0; i < n; i++){
				if(strcmp(x[i].s1, s) == 0){
					x[i].cnt ++;
					check = 1;
					break;
				}
			}
			if(!check){
				strcpy(x[n].s1, s);
				x[n].cnt = 1;
				n++;
			}		
		}	
	}
	int maxlen = 0;
	for(int i = 0; i < n; i++){
		int len = strlen(x[i].s1);
		if(len > maxlen) maxlen = len;
	}
	
	for(int i = 0; i < n; i++){
		if(strlen(x[i].s1) == maxlen) printf("%s %d\n",x[i].s1, x[i].cnt);
	
	}
}