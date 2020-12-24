#include <stdio.h>
#define mod 1234567

int main() {
	
	int t, n, i;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int arr[n-1];
		int jumlah = 1;
		for(i = 0; i < n-1; i++) {
			scanf("%d", &arr[i]);
			jumlah = (jumlah * (arr[i]%mod)) % mod;
		}
		printf("%d\n", jumlah);
	}
	
return 0;
}
