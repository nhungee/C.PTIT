#include <stdio.h>

void ghep(int a[],int m, int b[], int n){
	int T[m+n] ;
	for(int i = 0; i < m; i++) T[i] = a[i];
	for(int i = 0; i < n; i++) T[m + i] = b[i];
	for(int i = 0 ; i < m+n ; i++){
		printf("%d ", T[i]);
	}
}

void tang(int a[],int m, int b[], int n){
	int T[m+n] ;
	for(int i = 0; i < m; i++) T[i] = a[i];
	for(int i = 0; i < n; i++) T[m + i] = b[i];
	for(int i = 0; i < m+n; i++){
		int cnt = i;
		for(int j = i+1; j < m+n; j++){
			if(T[j] < T[cnt]) cnt = j;
		}
		int tmp = T[i];
		T[i] = T[cnt];
		T[cnt] = tmp;
	}
	for(int i = 0 ; i < m+n ; i++){
		int check = 1; 
		for(int j = i-1; j >= 0; j--){
			if(T[i] == T[j]) check = 0;
		}
		if(check) printf("%d ", T[i]);
	}
}

void giam(int a[],int m, int b[], int n){
	int T[m+n] ;
	for(int i = 0; i < m; i++) T[i] = a[i];
	for(int i = 0; i < n; i++) T[m + i] = b[i];
	for(int i = 0; i < m+n; i++){
		int cnt = i;
		for(int j = i+1; j < m+n; j++){
			if(T[j] > T[cnt]) cnt = j;
		}
		int tmp = T[i];
		T[i] = T[cnt];
		T[cnt] = tmp;
	}
	for(int i = 0 ; i < m+n ; i++){
		int check = 1; 
		for(int j = i-1; j >= 0; j--){
			if(T[i] == T[j]) check = 0;
		}
		if(check) printf("%d ", T[i]);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int m, n;
		scanf("%d%d", &m, &n);
		char c;
		scanf(" %c", &c);
		int a[m], b[n];
		for(int i = 0; i < m; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		if(c == 'T') tang(a,m,b,n);
		if(c == 'G') giam(a,m,b,n);	
		if(c == 'F') ghep(a,m,b,n);
		if(c == 'A') ghep(b,n, a,m);
	}
}