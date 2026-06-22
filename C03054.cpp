#include <stdio.h> 

int main (){ 
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int a[18];
		int vt = 0;
		int check = 1;
		if(n == 0) check = 0;
		while(n > 0) {
			int i = n % 10;
			if(i != 0 && i != 9 && i != 8 && i != 1){
				check = 0;
				break;
			}
			a[vt] = i;
			vt++;
			n /= 10;	 
		}
		if(check) {
		    for(int i = vt-1; i >= 0; i--){
				switch (a[i]){ 
				case 0: 
				
				   printf ("0"); 
				   break;
				
				case 1: 
				
				   printf ("1"); 
				   break;
				
				case 8: 
				
				   printf ("0"); 
				   break; 
				
				case 9: 
				
				  printf ("0"); 
				  break;
				}
			}	
		} else printf("INVALID");
		printf("\n");
	}
	return 0;
}