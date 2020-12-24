#include <stdio.h>
#include <math.h>

int fpb(int a, int b) {
	if(a%b == 0) return b;
	
	return fpb(b, a%b);
}

int main() {
	
	int t, l, b;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &l, &b);
		int x = pow(fpb(l, b), 2);
		int hasil = (l*b) / x;
		printf("%d\n", hasil);
	}
	 
return 0;
}
