#include <stdio.h>
#include <stdbool.h>

int prime(int x) {
	int i, test = 0;
	for(i = 1; i <= x; i++) {
		if(x%i == 0) test++; 
	}
	if(test == 2) return true;
	else return false;
}

int sum_digit(int n) {
	int temp, res = 0;
	while(n > 0) {
		temp = n % 10;
		res = res + temp;
		n = n / 10;
	}
	return res;
}

int sum_prime_factor(int n) {
	int i, res = 0;
	while(n != 1) {
		for(i = 2; i <= n; i++) {
			if(n%i == 0 && prime(i)) {
				res = res + sum_digit(i);
				n = n / i;
			}
		}
	}
	return res;
}

int main() {
	
	int n;
	scanf("%d", &n);
	if(sum_digit(n) == sum_prime_factor(n)) {
		printf("1\n");
	} else {
		printf("0\n");
	}
	
return 0;
}
