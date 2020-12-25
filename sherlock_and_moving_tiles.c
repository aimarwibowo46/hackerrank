#include <stdio.h>
#include <math.h>

int main() {
	
	int sisi, v1, v2, n;
	unsigned long long q;
	double time;
	scanf("%d %d %d", &sisi, &v1, &v2);
	scanf("%d", &n);
	while(n--) {
		scanf("%llu", &q);
		time = fabs( (sqrt(2*q) - sisi*sqrt(2)) / (v1-v2) );
		printf("%.4lf\n", time);
	}
	
return 0;
}
