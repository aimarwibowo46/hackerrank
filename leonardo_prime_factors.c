#include <stdio.h>

unsigned long long fpb(unsigned long long a, unsigned long long b) {
	if(a%b==0) return b;
	
	return fpb(b, a%b);
}

int main() {
	
	int q;
	unsigned long long n, i, temp, jumlah;
	scanf("%d", &q);
	while(q--) {
		scanf("%llu", &n);
		if(n<2) {
			printf("0\n");
		} else {
			temp = 2;
			jumlah = 1;
			for(i=3; i*temp<=n; i+=2) {
				if(fpb(i, temp) == 1) {
					temp = temp * i;
					jumlah++;
				}
			}
			printf("%llu\n", jumlah);
		}
	}
	
return 0;
}
