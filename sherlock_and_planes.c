#include <stdio.h>

int main() {
	
	int t, i;
	scanf("%d", &t);
	
	while(t--) {
		int x[4], y[4], z[4];
		for(i = 0; i < 4; i++) {
			scanf("%d %d %d", &x[i], &y[i], &z[i]);
		}
		
		int tempX = x[0], tempY = y[0], tempZ = z[0];
		int cekX = 1, cekY = 1, cekZ = 1;
		for(i = 1; i < 4; i++) {
			if(x[i] != tempX) {
				cekX = 0;
			}
			if(y[i] != tempY) {
				cekY = 0;
			}
			if(z[i] != tempZ) {
				cekZ = 0;
			}
		}
		
		if(cekX == 0 && cekY == 0 && cekZ == 0) {
			printf("NO\n");
		} else {
			printf("YES\n");
		}
	
	}
	
return 0;
}
