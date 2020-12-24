#include <stdio.h>

int main() {
    int i, q;
    scanf("%d", &q);
    for (i = 1; i <= q; i++)
    {
        int j, n, minx, maxx, miny, maxy, count = 0;
        scanf("%d", &n);
        int x[n], y[n];
        for (j = 0; j < n; j++)
        {
            scanf("%d %d", &x[j], &y[j]);
        }
        minx = x[0], maxx = x[0], miny = y[0], maxy = y[0];
        for (j = 1; j < n; j++) // cukup cek titik2 terluar
        {
            if (x[j] < minx)
            {
                minx = x[j];
            }
            if (x[j] > maxx)
            {
                maxx = x[j];
            }
            if (y[j] < miny)
            {
                miny = y[j];
            }
            if (y[j] > maxy)
            {
                maxy = y[j];
            }
        }
        for (j = 0; j < n; j++)
        {
            // cek apakah salah satu titik berada di dalam titik2 terluar
            if (x[j] > minx && x[j] < maxx && y[j] > miny && y[j] < maxy) 
            {
                count++;
            }
        }
        if (count > 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    
return 0;
}
