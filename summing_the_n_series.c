#include <stdio.h>
#define mod 1000000007

int main() {
	
	int t;
	unsigned long long n, hasil;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		hasil = ((n % mod) * (n % mod)) % mod;
		printf("%llu\n", hasil);
	}
	
return 0;
}
