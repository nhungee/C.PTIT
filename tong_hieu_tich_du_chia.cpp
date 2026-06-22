#include <stdio.h>
int main (){
	int a, b ; 
	scanf("%d %d", &a, &b);
	if(a>=0&&b>>0){
	printf ("%d\n%d\n%d\n%d\n%d\n%.2lf\n%", a+b, a-b, a*b,a/b, a%b, (double)a/b);
    }
    else{
    	printf ("0");
	}
	return 0;
}