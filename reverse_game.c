#include <stdio.h>

int main() {
	
	int t, n, k, i, j;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &k);
		int x = n-1;
		int y = 0;
		int arr[n];
		int temp[n];
		for(i = 0; i < n; i++) {
			arr[i] = i;
		}
		for(j = 0; j < n; j++) {
			if(j%2 == 0) {
				temp[j] = arr[x];
				x--;
			} else {
				temp[j] = arr[y];
				y++;
			}
		}
		for(j = 0; j < n; j++) {
			if(temp[j] == k) {
				printf("%d\n", j);
				break;
			}
		}
	}
	
return 0;
}
