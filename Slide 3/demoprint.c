#include <stdio.h>
int main()
{

    double m, n, tong;
    n = 1;
    tong = 0;

    for (int i = 1; i <= 64; i++)
    {
        tong += i;
        printf("%d\t %.0lf\t %.0lf\t", i, n, tong);
        
            n *= 2;
    }
    printf("Tong cua hat gao: %d\n", tong);
    return 0;
}