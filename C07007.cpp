#include <stdio.h>
#include <string.h>

struct phanso{
	int a;
	int b;
};
typedef struct phanso phanso;

void nhap(phanso x[]){
	for(int i = 0 ; i < 2; i++){
		scanf("%d %d", &x[i].a, &x[i].b);
	}
}

int ucln(int a, int b){
		while(b > 0){
			int r = a %b;
			a = b; 
			b = r;
		}
		return a;
}

void rutgon(phanso x[]){
	for(int i = 0; i < 2; i++){
		int g = ucln(x[i].a, x[i].b);
		x[i].a /= g ;
		x[i].b /= g ;
	}	

}

int bcnn(int a, int b){
	return (a/(ucln(a, b))*b);
}
 
void quydong(phanso x[]){
	int g = bcnn(x[0].b, x[1].b);
	for(int i = 0 ; i < 2; i++){
		int j = g / x[i].b;
		x[i].a *= j ;
		x[i].b *= j ;
		printf("%d/%d ", x[i].a,x[i].b);
	}	
}

void tong(phanso x[]){
	printf("%d/%d", x[0].a+x[1].a, x[0].b);
}

void thuong(phanso x[]){
	int g = ucln(x[0].a, x[1].a);
	x[0].a /= g ;
	x[1].a /= g ;
	printf("%d/%d", x[0].a,x[1].a);
}

int main(){
	int t ;
	scanf("%d", &t);
	int cnt = 1;
	while(t--){
		phanso s[2];
		nhap(s);
		printf("Case #%d :\n", cnt);
		rutgon(s);
		quydong(s);
		printf("\n");
		tong(s);
		printf("\n");
		thuong(s);
		printf("\n");
		cnt++;
	}
	return 0;
}