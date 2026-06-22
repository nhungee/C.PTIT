#include <stdio.h>


void swap(int a,int b){
	int tmp = a; 
	a= b;
	b= tmp;
}


int main(){
	int n;
	int a[10];
	for(int i = 0 ; i< 10 ; i++) a[i] = 0;
	scanf("%d", &n);
	int leng = 0;
	while(n){
		a[leng] = n %10;
		n/=10;
		leng++;
	}
	int tmp = a[0];
	a[0] = a[leng - 1];
	a[leng - 1]= tmp;
	int result = 0;
	for(int i = leng-1 ; i >= 0; i--){
		result = result * 10 + a[i];
	}
	printf("%d", result);
	return 0;

}

//void change(int &a, int &b){
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main(){
//	int n;
//	int a[10];
//	for(int i = 0; i < 10; i++) a[i] = 0;
//	scanf("%d", &n);
//	int vtri = 0;
//	while(n){
//		a[vtri] = n % 10;
//		n /= 10;
//		vtri++;
//	}
//	change(a[0], a[vtri - 1]);
//	int result = 0;
//	for(int i = vtri - 1; i >= 0; i--){
//		result = result*10 + a[i];
//	}
//	printf("%d", result);
//	return 0;
//}