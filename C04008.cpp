#include <stdio.h>

int main(){
	int t, stt = 1; 
	scanf("%d", &t);
	while(t--){
		int N, M, p;
		scanf("%d%d%d", &N, &M, &p);
		int a[N];
		for(int i = 0; i < N; i++){
			scanf("%d", &a[i]);
		}
		int b[M];
		for(int i = 0; i < M; i++){
			scanf("%d", &b[i]);
		}
		printf("Test %d:\n", stt++);
		for(int i = 0; i < p; i++) printf("%d ", a[i]);
		for(int i = 0; i < M ; i++) printf("%d ", b[i]);
		for(int i = p; i < N; i++) printf("%d ", a[i]);
		printf("\n");
	} 
}