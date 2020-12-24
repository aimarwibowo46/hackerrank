#include <stdio.h>

int main() {
	
	int n, i, j = 0, langkah = 0; 
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	while(j < n-1) {
		if(arr[j+2] == 0) {
			langkah++;
			j = j + 2;
		} else {
			langkah++;
			j = j + 1;
		}
	}
	printf("%d\n", langkah);
	
return 0;
}
