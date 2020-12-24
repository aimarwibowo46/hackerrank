#include <stdio.h>

int main() {
	
	int n, m, a, b, i;
	scanf("%d %d", &n, &m);
	unsigned long long k, jml = 0, average;
	
	while(m--) {
		scanf("%d %d %llu", &a, &b, &k);
		jml += (b-a+1) * k;
	}
	printf("%llu\n", jml/n);
	
return 0;
}
