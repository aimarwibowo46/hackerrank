#include <stdio.h>

int bestDivisor(int arr[], int jml_faktor) {
	
	int i, hasil, max = 0;
	for(i = 0; i <= jml_faktor; i++) {
		int x, sum = 0, temp = arr[i];
		while(temp != 0) {
			x = temp % 10;
			sum = sum + x;
			temp = temp / 10;
		}
		if(max < sum) {
			max = sum;
			hasil = arr[i];
		}
	}
	return hasil;
}

int main() {
	
	int n, i, j, jml_faktor = 0;
	scanf("%d", &n);
	int arr[n];
	arr[0] = 1;
	for(i=2; i<=n; i++) {
		if(n%i == 0) {
			jml_faktor++;
			arr[jml_faktor] = i;
		}
	}
	
	int x = bestDivisor(arr, jml_faktor);
	printf("%d\n", x);
	
return 0;
}
