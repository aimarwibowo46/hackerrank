#include <stdio.h>

int main() {
	
	int n, px, py, qx, qy, rx, ry;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d %d %d", &px, &py, &qx, &qy);
		rx = qx + (qx - px);
		ry = qy + (qy - py);
		printf("%d %d\n", rx, ry);
	}
	
return 0;
}
