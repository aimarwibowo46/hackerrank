#include <stdio.h> 

int main() {
    
    int n, i, j, count, hasil = 0;
    scanf("%d", &n);
    
    int arr[n], freq[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  
    }
    
    for(i = 0; i < n; i++) {
        count = 1;
        
        if(freq[i] == 0) continue;
        else {
            for(j = i+1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
            hasil = hasil + (freq[i]/2);
        }
    }

    printf("%d\n", hasil);
     
return 0;
}
