#include <stdio.h>

int main() {
	
	int t, n, i;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int arr[n], jumlah = 0;
		for(i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			jumlah = (jumlah + arr[i]%3) % 3;
		}
		if(jumlah == 0) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	
return 0;
}
