#include <stdio.h>

long long fpb(long long a, long long b) {
	if(a%b == 0) return b;
	
	return fpb(b, a%b);
}

long long myabs(long long x) {
	if(x >= 0) return x; 
	
	return -x;
}

int main() {
	
	long long x1, y1, x2, y2, dx, dy, gcd;
	int t;
	scanf("%d", &t);
	while(t--) {
		scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
		dx = x1 - x2;
		dy = y1 - y2;
		// fpb menunjukkan berapa banyak pembagian sama rata pada masing2 sumbu x dan y
		if(dx == 0 && dy != 0) {
			printf("%lld\n", myabs(dy)-1);
		} else if(dx != 0 && dy == 0) {
			printf("%lld\n", myabs(dx)-1);
		} else {
			gcd = fpb(myabs(dx), myabs(dy));
			printf("%lld\n", gcd-1);
		}
	}
	
return 0;
}
