#include <stdio.h>
#include <string.h>

int main() {
	
	int n, i, posisi = 0, jml = 0;
	scanf("%d", &n);
	getchar();
	
	char step[n];
	gets(step);
	for(i = 0; i < strlen(step); i++) {
		if(posisi == -1 && step[i] == 'U') {
			jml++;
			posisi++;
		} else {
			if(step[i] == 'U') {
				posisi++;
			} else {
				posisi--;
			}
		}
	}
	
	printf("%d\n", jml);

return 0;
}
