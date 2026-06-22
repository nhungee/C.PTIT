//#include <stdio.h>
//#include <math.h>
//
//int check(int n){
//	int p = n % 10; 
//	while(n > 0){
//		if(p < n % 10 ){
//		  	return 0;	
//		} 
//		p = n % 10; 
//		n /= 10;	 
//	}
//	return 1; 
//}
//
//int main(){
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		int n;
//		scanf("%d", &n); 
//		int start = pow(10, n-1), end = pow(10, n); 
//		for(int i = start; i < end; i++){
//			if(check(i)) printf("%d ", i);
//			}
//			printf("\n");
//		}
//	return 0;
//}

#include <stdio.h>
#include <math.h>

int check(int n)
{
	int du;
	int a[7];
	for (int i = 0; i < 7; i++)
		a[i] = 0;
	int vt = 0;
	while (n > 0)
	{
		du = n % 10;
		a[vt] = du;
		n /= 10;

		if (vt > 0)
		{
			if (a[vt] > a[vt - 1])
				return 0;
		}
		vt++;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		for (int i = pow(10, n - 1); i < pow(10, n); i++)
		{
			if (check(i))
				printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
