#include <stdio.h>
#define mod 100000

int main() {
	
	int t, n, i;
	scanf("%d", &t);
	while(t--) {
		int hasil = 1;
		scanf("%d", &n);
		for(i = 1; i <= n; i++) {
			hasil =  (hasil * 2%mod) % mod;
		}
		hasil = (hasil - 1) % mod;
		printf("%d\n", hasil);
	}
	
return 0;
}
