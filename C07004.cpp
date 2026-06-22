#include <stdio.h>
#include <string.h>

struct phanso{
	int tu;
	int mau;
};
typedef struct phanso phanso;

int ucln(int a, int b){
	while(b > 0){
		int r = a % b;
		a = b; 
		b = r;
	}
	return a;
}

void rutgon(phanso *p){
	int g = ucln(p->tu, p->mau);
	p->tu /= g;
	p->mau /= g;
}

int main(){
	phanso x;
	scanf("%d%d",&x.tu, &x.mau);
	rutgon(&x);
	printf("%d/%d", x.tu, x.mau);

}