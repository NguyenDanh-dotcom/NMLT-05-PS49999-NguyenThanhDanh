#include <stdio.h>
int main()
{
    // nhap Toan, Ly, Hoa tinh diem trung binh, Toan 3 lan, Ly 2 lan, Hoa 1 lan
    int Toan, Ly, Hoa;
    printf("Nhap diem Toan: ");
    scanf("%d", &Toan);
    printf("Nhap diem Ly: ");
    scanf("%d", &Ly);
    printf("Nhap diem Hoa: ");
    scanf("%d", &Hoa);

    // Tinh diem trung binh, tron 2 chu so thap phan, ep kieu du lieu
    printf("Diem trung binh: %.2f\n", (float)(Toan * 3 + Ly * 2 + Hoa * 1) / 6);
    return 0;
}