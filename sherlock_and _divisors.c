#include <stdio.h>
#include <math.h>

int main() {
	
	int t, n, i;
	scanf("%d", &t);
	while(t--) {
		int jumlah = 0;
		scanf("%d", &n);
		for(i = 1; i <= sqrt(n); i++) {
			if(n%i == 0) {
				if(i%2 == 0) {
					jumlah++;
				}
				if((n/i) % 2 == 0 && (n/i) != i) {
					jumlah++;
				}
			}
		}
		printf("%d\n", jumlah);
	}
	
return 0;
}
