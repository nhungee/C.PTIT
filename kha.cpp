#include <stdio.h>
#include <string.h>

int main(){
	int n; 
	char c[1000];
	printf("nhap n : ");
	scanf("%d", &n);
	printf("nhap xau ky tu : ");
	getchar();
	gets(c);
	printf("so vua nhap : %d\n", n);
	printf("chuoi vua nhap : %s\n", c);
	printf("chieu dai cua chuoi vua nhap : %d\n", strlen(c));
	return 0;
}