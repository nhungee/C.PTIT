#include <stdio.h>
#include <math.h>

long long MIN(long long n){
  long long res=0;
  long long t=0;
  while (n){
    long long d=n%10;
    n/=10;
    if (d==6) d=5;
    res += d*(long long)pow(10, t);
    t++;
  }
  return res;
}

long long MAX(int n){
  long long res=0;
  long long t=0;
  while (n){
    long long d=n%10;
    n/=10;
    if (d==5) d=6;
    res += d*(long long)pow(10, t);
    t++;
  }
  return res;
}

//long long MIN(long long n){
//	long long x = 0;
//	long long m = n;
//	while(m > 0){
//		x++;
//		m /= 10;
//	}
//	long long min = 0;
//	while(n > 0){
//		long long d = n / (long long)pow(10, x-1);
//		if(d == 6){
//			d = 5;
//		}
//		min =  min*10 + d;
//		n %= (long long)pow(10, x-1);
//		x--;
//	}
//	return min;
//}
//
//long long MAX(long long n){
//	long long m = n;
//	long long x = 0;
//	while(m > 0){
//		x++;
//		m /= 10;
//	}
//	long long max = 0;
//	while(n > 0){
//		long long d = n / (long long)pow(10, x-1);
//		if(d == 5){
//			d = 6;
//		}
//		max =  max*10 + d;
//		n %= (long long)pow(10, x-1);
//		x--;
//	}
//	return max;
//}


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		printf("%lld %lld\n", MIN(a) + MIN(b), MAX(a) + MAX(b)); 
	}
	return 0;
}


