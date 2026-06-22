#include <stdio.h>
#include <math.h>
int main (){
	int a, b, c;

	scanf ("%d %d %d",&a,&b,&c);
	double d=1.0*b*b-4*1.0*a*c;
	if (a==0){
	if(b!=0){
		printf ("%.2lf", -(double)c/b);
	}
	else if (b==0&&c!=0){
		printf ("NO");
	}
	}
	if(a!=0){
		if (d > 0){
			printf ("%.2lf %.2lf", (-b+sqrt(d))/(2*1.0*a),(-b-sqrt(d))/(2*1.0*a) );
		}
		else if(d == 0){
			printf ("%.2lf", -1.0*b/(2*a));
		}
		else {
			printf ("NO");
		}
	}
	return 0;
}
