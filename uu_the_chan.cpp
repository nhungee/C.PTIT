#include <stdio.h>
#include <math.h>

int main (){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a;
		scanf("%lld", &a);
		int chan = 0, le = 0;
		long long b = a;
		while(a > 0){
			if(b % 2 != 0) {
				break;
			}
	    	if((a % 10) % 2 == 0){
				chan++;
			}
			else {
				le++;		
			}
			a /= 10;
		}
        if(chan > le){
        	printf ("YES\n");
		}
		else printf ("NO\n");
	}
	return 0;
}