#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int sonhap = n;
	int e, dao = 1;
	while(n > 0){
		e = n % 10;
		dao = dao*10 + e;
		n /= 10;
	}
	printf("%d %d", dao % 10, sonhap % 10);
	return 0;
}