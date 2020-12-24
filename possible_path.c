#include <stdio.h>
#define llu unsigned long long

llu fpb(llu p, llu q) {
	if(p%q == 0) return q;
	
	return fpb(q, p%q);
}

int main() {
	
	int t;
	llu a, b, x, y;
	scanf("%d", &t);
	while(t--) {
		scanf("%llu %llu %llu %llu", &a, &b, &x, &y);
		// fpb(a, b) = fpb(a, b + k.a) = fpb(a + k.b, b)
		// k = 1 atau -1
		if(fpb(a, b) == fpb(x, y)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
return 0;
}
