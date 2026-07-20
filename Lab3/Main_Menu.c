#include <stdio.h>
#include <math.h>
int main()
{
    int chon;
    float diem;
    float a, b, c, delta, x, x1, x2;
    float kWh;
    float tongTien;
    do
    {
        printf("+--------------------------------------------------+\n");
        printf("| MENU CHUONG TRINH LAB 3                          |\n");
        printf("+--------------------------------------------------+\n");
        printf("| 1. Chuc nang tinh hoc luc hoc sinh               |\n");
        printf("| 2. Chuc nang giai phuong trinh bac 2             |\n");
        printf("| 3. Chuc nang tinh tien dien tieu thu hang thang  |\n");
        printf("| 4. Thoat chuong trinh                            |\n");
        printf("+--------------------------------------------------+\n");
        printf(">> Chon chuc nang (1-4): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
        //  if else if xet dong cap với loai trừ
            printf("Ban chon chuc nang: 1.Tinh hoc luc hoc sinh\n");
            printf("Nhap diem: ");
            scanf("%f", &diem);
            if (diem < 3.5)
            {
                printf("Hoc luc yeu\n");
            }
            else if (diem < 5)
            {
                printf("Hoc luc trung binh\n");
            }
            else if (diem < 8)
            {
                printf("Hoc luc kha\n");
            }
            else if (diem < 9)
            {
                printf("Hoc luc gioi\n");
            }
            else
            {
                printf("Hoc luc xuat sac\n");
            }
            break;
        case 2:
        // sài if esle phân cấp, tinh phương trình bật 2
            printf("Ban chon chuc nang: 2.Giai phuong trinh bac 2\n");
            printf("Phuong trinh: ax^2 + bx + c = 0\n");
            printf("Nhap a,b,c: ");
            scanf("%f %f %f", &a, &b, &c);
            // a!=0 xet delta
            // a=0 b=0 c!=0 phuong trinh vo nghiem
            // a=0 b!=0 phuong trinh 1 nghiem x= -c/b
            // a=0 b=0 c=0 phuong trinh vo so nghiem
            if (a == 0)
            {
                if (b == 0)
                {
                    if (c == 0)
                    {
                        printf("Phuong trinh vo so nghiem\n");
                    }
                    else
                    {
                        printf("Phuong trinh vo nghiem\n");
                    }
                }
                else
                {
                    x = -c / b;
                    printf("Phuong trinh 1 nghiem: %.2f\n", x);
                }
            }
            else
            {
                delta = b * b - 4 * a * c;
                if (delta < 0)
                {
                    printf("Phuong trinh vo nghiem\n");
                }
                else if (delta == 0)
                {
                    x = -b / (2 * a);
                    printf("Phuong trinh co nghiem kep: %.2f\n", x);
                }
                else
                {
                    x1 = (-b + sqrt(delta)) / (2 * a);
                    x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("Phuong trinh co 2 nghiem phan biet: %.2f va %.2f\n", x1, x2);
                }
            }

            break;

        case 3:
            printf("Ban chon chuc nang: 3.Tinh tien dien tieu thu hang thang\n");
            //Bài toán tính lũy tiến    
            printf("Nhap tong so kWh tieu thu trong hang: ");
            scanf("%f", &kWh);
            if (kWh <= 50)
            {
                tongTien = 1678 * kWh;
                printf("tong tien dien trong thang: %.0f dong\n", tongTien);
            }
            else if (kWh <= 100)
            {
                tongTien = (1678 * 50) + ((kWh - 50) * 1734);
                printf("tong tien dien trong thang: %.0f dong\n", tongTien);
            }
            else if (kWh <= 200)
            {
                tongTien = (1678 * 50) + (50 * 1734) + ((kWh - 100) * 2014);
                printf("tong tien dien trong thang: %.0f dong\n", tongTien);
            }
            else if (kWh <= 300)
            {
                tongTien = (1678 * 50) + (50 * 1734) + (100 * 2014) + ((kWh - 200) * 2536);
                printf("tong tien dien trong thang: %.0f dong\n", tongTien);
            }
            else if (kWh <= 400)
            {
                tongTien = (1678 * 50) + (50 * 1734) + (100 * 2014) + (100 * 2536) + ((kWh - 300) * 2834);
                printf("tong tien dien trong thang: %.0f dong\n", tongTien);
            }
            else
            {
                tongTien = (1678 * 50) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (100 * 2834) +((kWh- 400)* 2927);
                printf("tong tien dien trong thang: %.0f dong\n", tongTien);
            }
            break;
        case 4:
            printf("Ban chon chuc nang: 4.Thoat chuong trinh\n");
            break;
        default:
            printf("Ban phai chon chuc nang tu 1 den 4\n");
        }
    } while (chon != 4);
    return 0;
}
