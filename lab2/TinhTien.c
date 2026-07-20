// gao=2,dau=1.5,ti gia usd 1=26.29 nhap so luong gao va so luong dau tinh tien
#include <stdio.h>
int main()
{
    float soLuongGao, soLuongDau;
    #define USD 26.29 
    #define gao 2
    #define dau 1.5
    printf("Nhap so luong gao: ");
    scanf("%f", &soLuongGao);
    printf("Nhap so luong dau: ");
    scanf("%f", &soLuongDau);
    float tongTien = soLuongGao * gao + soLuongDau * dau;
    printf("Tong tien: %.2f USD\n", tongTien);
    printf("Tong tien: %.2f VND\n", tongTien * USD);
    return 0;
}