#include <stdio.h>
int main (){
	int t;
	scanf ("%d", &t);
	while (t--){
		long long a;
		scanf ("%.2lld",&a );
		printf ("%.2lld\n", a*a);
	}
	return 0;
}


