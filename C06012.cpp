#include <stdio.h>
#include <string.h>

int a[500];
void sang(){
	for(int i = 2; i < 500; i++) a[i] = 1;
	a[0] = a[1] = 0;
	for(int i = 2; i*i < 500; i++){
		if (a[i]){
			for(int j = i*i; j < 500; j += i){
				a[j] = 0;
			}			
		}
	}
}

int check(char n[]){
	sang();
	int N = strlen(n);
	int j = N-1;
	for(int i = 0; i < N; i++){
		if(a[n[i]- '0'] == 0) return 0;
		else if(n[i] != n[j]){
			return 0;
			break;
		}else j--;
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
		else printf ("NO\n");
	}
}