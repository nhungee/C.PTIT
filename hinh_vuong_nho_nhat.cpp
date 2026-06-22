#include <stdio.h>
#include <math.h>

int main(){
	int  a, b, c, d, e , f, g, h;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	scanf("%d %d %d %d", &e, &f, &g, &h);
	int A[4] = {a, c, e, g}, B[4] = {b, d, f, h}, maxx = -101, maxy = -101, minx = 101, miny = 101;
    for(int i = 0; i < 4; i++){
    	if(A[i] > maxx){
    		maxx = A[i];
		}
		if(A[i] < minx){
	 		minx = A[i];
		}
	}
	int ox = maxx - minx;
    for(int i = 0; i < 4; i++){
    	if(B[i] > maxy){
    		maxy = B[i];
		}
		if(B[i] < miny){
		    miny = B[i];
		}
	}
	int oy = maxy - miny;		
	int canh = (ox > oy) ? ox : oy;
	printf("%d", canh*canh);
	return 0;
}
	