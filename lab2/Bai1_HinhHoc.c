#include <stdio.h>
int main() {
    // nhap a,b tinh chu vi, dien tich hinh chu nhat
    float a,b;
    printf("Nhap chieu dai: ");
    scanf("%f", &a);
    printf("Nhap chieu rong: ");
    scanf("%f", &b);
    printf("Chu vi hinh chu nhat: %.2f\n", 2*(a+b));
    printf("Dien tich hinh chu nhat: %.2f\n", a*b);
    //nhap r, #define pi= 3.14159 tinh chu vi, dien tich hinh tron
    float r;
    #define pi 3.14159
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    printf("Chu vi hinh tron: %.2f\n", 2*pi*r);
    printf("Dien tich hinh tron: %.2f\n", pi*r*r);
    return 0;
} 