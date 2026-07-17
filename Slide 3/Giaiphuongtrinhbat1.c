#include <stdio.h>
int main()
{
    // ax + b = 0, if a =0
    int a, b;
    float x;
    while (1)
    {
        printf("Nhap a,b: ");
        scanf(" %d %d", &a, &b);
        if (a == 0)
        {
            if (b == 0)
                printf("Phuong trinh co vo so nghiem\n");
            else
                printf("Phuong trinh vo nghiem\n");
        }
        
        else
        {
            x = (float)-b / a;
            printf("Nghiem cua phuong trinh la: %.2f\n", x);
        }
    }
    return 0;
}