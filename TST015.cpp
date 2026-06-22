#include <stdio.h>
#include <string.h>
#include <math.h>

struct tamgiac{
	int a;
	int b;
	int c;
	double dientich;
};
typedef struct tamgiac tamgiac;

double S(int a, int b, int c){
	double p = (a + b + c)/ 2.0;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

void nhap(tamgiac x[50],int n){
	for(int i = 0; i < n; i++){
		scanf("%d", &x[i].a);
		scanf("%d", &x[i].b);
		scanf("%d", &x[i].c);
		x[i].dientich = S(x[i].a, x[i].b, x[i].c);
	}		
}

void sapxep(tamgiac x[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(x[i].dientich > x[j].dientich){
				tamgiac temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}

void xuat(tamgiac x[], int n){
	for(int i = 0; i < n; i++){
		printf("%d %d %d\n", x[i].a,x[i].b,x[i].c );
	}

}

int main(){
	int n;
	scanf("%d", &n);
	tamgiac x[100];
	nhap(x,n);
	sapxep(x,n);
	xuat(x,n);
}

