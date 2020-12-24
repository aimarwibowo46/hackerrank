#include <stdio.h>
#include <string.h>

int main() {
	
	char arr[100];
	long long n, i, x, total;
	int jml_a = 0, jml_a2 = 0;
	
	gets(arr);
	scanf("%lld", &n);
	for(i = 0; i < strlen(arr); i++) {
		if(arr[i] == 'a') jml_a++;
	}
	
	for(i = 0; i < (n % strlen(arr)); i++) {
		if(arr[i] == 'a') jml_a2++;
	}
	
	x = n / strlen(arr);
	total = (x * jml_a) + jml_a2;
	printf("%lld\n", total);
	
return 0;
}
