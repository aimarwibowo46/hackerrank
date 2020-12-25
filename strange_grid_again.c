#include <stdio.h>

int main() {
	
	int c;
	unsigned long long r, hasil;
	scanf("%llu %d", &r, &c);
	if(r%2 == 0) {
		hasil = 10 * (r/2 - 1) + (2*c - 1);
	} else {
		hasil = 10 * (r/2) + (2*c - 2);
	}
	printf("%llu\n", hasil);
	
return 0;
}
