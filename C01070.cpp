#include <stdio.h>
#define max(a, b) (a > b ? a : b) 

int main(){
	int a1, a2, b1, b2, c1, c2;
	scanf("%d%d%d%d%d%d", &a1, &a2, &b1, &b2, &c1, &c2);
	
	int max1 = max(max(a1, b1), c1);
	int max2 = max(max(a2, b2), c2);
	int max = max(max1, max2);
	
	if((a1*a2 + b1*b2 + c1*c2 == max*max) && (a1 + b1 == max || c1 + b1 == max || a1 + c1 == max) && (b2 == a2 || c2 == b2 || a2 == c2) && (b2 + c2 == c1 || c2 + a2 == a1 || c2 + b2 == b1) && (max1 > max2)) 
	 	printf("YES\n");
	else if((a1*a2 + b1*b2 + c1*c2 == max*max) && (a2 + b2 == max || c2 + b2 == max || a2 + c2 == max) && (b1 == a1 || c1 == b1 || a1 == c1) && (b1 + c1 == c2 || c1 + a1 == a2 || c1 + b1 == b2) && (max1 < max2)) 	
		printf("YES\n");
	else printf("NO\n");
	return 0;
}

