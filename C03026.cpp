#include <stdio.h>


int palindrome(int n){
	int tmp = n;
	int d;
	int nghich = 0;
	while(n > 0){
		d = n % 10;
		nghich = nghich*10 + d;
		n/= 10;
	}
	if(nghich == tmp) return 1;
	return 0;
}

int main(){
	int a, b;
	scanf("%d%d",&a, &b);
	if((palindrome(a) && palindrome(b))|| (!palindrome(a) && !palindrome(b))) printf ("NO");
	else printf ("YES");
}