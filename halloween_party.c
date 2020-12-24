#include <stdio.h>

int main() {
	
	int t;
	unsigned long long k;
	scanf("%d", &t);
	while(t--) {
		scanf("%llu", &k);
		if(k%2 == 0) {
			printf("%llu\n", (k/2) * (k/2));
		} else {
			printf("%llu\n", (k/2) * (k/2+1));
		}
	}
	
return 0;
}
