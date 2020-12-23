#include <stdio.h>
#define mod 1000000007
#define ll long long

ll power(ll x, ll y, ll k) { // fast exponential + modulus multiplication
	ll res = 1;
	x = x % k;
	
	while(y > 0) {
		if(y%2 == 1) {
			res = (res*x) % k;
		}
		y = y / 2;
		x = (x*x) % k;
	}
	
	return res;
}

int main() {
	
	int n, a, jml_genap = 0, jml_ganjil = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &a);
		if(a%2 == 0) {
			jml_genap++;
		} else {
			jml_ganjil++;
		}
	}
	
	/* 
	* jumlah kombinasi ganjil = 2^(jml_ganjil-1) - 1;
	* jumlah kombinasi genap = 2^jml_genap - 1;
	* total = jumlah kombinasi ganjil + jumlah kombinasi genap + 
			  (jumlah kombinasi ganjil * jumlah kombinasi genap)
	* n = jml_ganjil + jml_genap
	* didaptkan penyederhanaan rumus total = 2^(n-1) - 1 
	*/

	if(jml_ganjil != 0) {
		printf("%lld\n", (power(2, jml_genap, mod) * power(2, jml_ganjil-1, mod) - 1) % mod);
	} else {
		printf("%lld\n", (power(2, jml_genap, mod) - 1) % mod);
	}
	
	
return 0;
}
