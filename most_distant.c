#include <stdio.h>
#include <math.h>

double jarak(long long a, long long b) {
	return sqrt(a*a + b*b);
}

int main() {
	
	int n, i;
	scanf("%d", &n);
	long long x[n], y[n];
	for(i = 0; i < n; i++) {
		scanf("%lld %lld", &x[i], &y[i]);
	}
	
	double min_x = x[0], max_x = x[0], min_y = y[0], max_y = y[0];
	for(i = 1; i < n; i++) {
		if(x[i] < min_x) {
			min_x = x[i];
		}
		if(x[i] > max_x) {
			max_x = x[i];
		}
		if(y[i] < min_y) {
			min_y = y[i];
		}
		if(y[i] > max_y) {
			max_y = y[i];
		}
	}
	
	double max = 0, arr[6];
	arr[0] = max_x - min_x;
	arr[1] = max_y - min_y;
	arr[2] = jarak(min_x, min_y);
	arr[3] = jarak(min_x, max_y);
	arr[4] = jarak(max_x, min_y);
	arr[5] = jarak(max_x, max_y);
	for(i = 0; i < 6; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	
	printf("%.6lf\n", max);
	
return 0;
}
