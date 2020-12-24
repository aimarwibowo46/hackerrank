#include <stdio.h>
// Perhatikan perintah soal yaitu fungsi find

int main() {
	
	int n, i, q, x, y, res;
	scanf("%d", &n);
	int arr[n];
	arr[0] = 0;
	for(i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &q);
	while(q--) {
		scanf("%d %d", &x, &y);
		if(x != y && arr[x+1] == 0 && x+1 <= y) {
			printf("Odd\n");
		} else {
			if(arr[x]%2 == 0) {
				printf("Even\n");
			} else {
				printf("Odd\n");
			}
		}
	}
	
return 0;
}
