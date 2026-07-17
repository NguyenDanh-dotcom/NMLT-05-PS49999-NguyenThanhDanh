#include <stdio.h>
int main()
{
    // ax + b = 0, a != 0
    float a, b, x;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    if (a != 0)
    {
        x = -(b / a);
        printf("Nghiem cua phuong trinh la: %.2f\n", x);
    }
    else if (b == 0)
    {
        printf("Phuong trinh co vo so nghiem\n");
    }
    else
    {
        printf("Phuong trinh vo nghiem\n");
    }
    return 0;
}