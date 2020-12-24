#include <stdio.h>
#include <math.h>

int main() {
	
	long long a, b, c;
	scanf("%lld", &a);
	
	if(a%2 == 1) {
		c = (a*a + 1) / 2;
		b = c-1;
	} else {
		long long m = a/2;
		long long n = 1;
		b = (m*m - n*n);
		c = (m*m + n*n); 
	}
	
	printf("%lld %lld %lld", a, b, c);
	
return 0;
}
