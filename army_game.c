#include <stdio.h>

int main() {
	
	int n, m;
	scanf("%d %d", &n, &m);
	
	int a = n / 2;
	int b = m / 2;
	int hasil = a * b; // Jika n dan m genap
	
	if(n%2 == 1 && m%2 == 0) {
		hasil = hasil + b;
	} else if(n%2 == 0 && m%2 == 1) {
		hasil = hasil + a;
	} else if(n%2 == 1 && m%2 == 1) {
		hasil = hasil + a + b + 1;
	}
	
	printf("%d\n", hasil);
	
return 0;
}
