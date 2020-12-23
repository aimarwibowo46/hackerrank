#include <stdio.h>

int main() {
	
	int n, i;
	scanf("%d", &n);
	int x[n], y[n];
	for(i = 0; i < n; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	
	int tempX = x[0];
	int tempY = y[0];
	int cekX = 1, cekY = 1;
	for(i = 1; i < n; i++) {
		if(x[i] != tempX) {
			cekX = 0;
		}
		if(y[i] != tempY) {
			cekY = 0;
		}
	}
	
	if(cekX == 0 && cekY == 0) {
		printf("NO\n");
	} else {
		printf("YES\n");
	}
	
return 0;
}
