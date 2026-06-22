#include <stdio.h>

//int main (){
//    int t;
//    scanf("%d", &t);
//    while(t--) {
//    	int a;
//    	scanf("%d",&a);
//    	printf ("%d\n",2*a);
//    }
//    return 0;
//}

int main (){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
    	int a;
    	scanf("%d",&a);
    	printf ("%d\n",2*a);
    }
    return 0;
}