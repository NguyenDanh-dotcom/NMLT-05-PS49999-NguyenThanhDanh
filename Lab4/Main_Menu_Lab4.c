#include <stdio.h>

int main()
{
    int chon;
    int min, max;
    int tong = 0;
    int bienDem = 0;
    int x, i;
    int X, I;

    do
    {
        printf("+-----------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH LAB 4           |\n");
        printf("+-----------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2 |\n");
        printf("| 2. Kiem tr So nguyen to                       |\n");
        printf("| 3. Kiem tra So chinh phuong                   |\n");
        printf("| 4. Thoat chuong trinh                         |\n");
        printf("+-----------------------------------------------+\n");
        printf(">>Xin moi chon chuc nang (1-4): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:

            printf("Ban chon chuc nang: 1.Tinh trung binh tong cac so chia het cho 2\n");
            do
            {
                printf("Nhap min va max: ");
                scanf("%d %d", &min, &max);
                if (min > max)
                {
                    printf("Phai nhap min:%d lon hon max:%d\n", min, max);
                }

            } while (min > max);

            for (int i = min; i <= max; i++)

            {
                if (i % 2 == 0)
                {
                    tong += i;
                    bienDem++;
                }
            }
            if (bienDem > 0)
            {
                float trungBinh = (float)tong / bienDem;
                printf("Tong cac so chia het cho 2: %d\n", tong);
                printf("So luong so chia het cho 2: %d\n", bienDem);
                printf("Trung binh cong: %.2f\n", trungBinh);
                break;
            }
            else
            {
                printf("khong co so nao chia het cho 2\n");
            }
            break;
        case 2:
            printf("Ban chon chuc nang: 2.Kiem tr So nguyen to\n");
            printf("Nhap x: ");
            scanf("%d", &x);
            if (x < 2)
            {
                printf("%d khong phai la so nguyen to \n", x);
                break;
            }
            else
            {
                for (i = 2; i <= x - 1; i++)
                {
                    if (x % i == 0)
                    {
                        break;
                    }
                }
                if (i == x)
                {
                    printf("%d la so nguyen to \n", x);
                }
                else
                {
                    printf("%d khong phai la so nguyen to \n", x);
                }
            }
            break;

        case 3:
            printf("Ban chon chuc nang: 3.Kiem tra So chinh phuong\n");
            printf("Nhap so X: ");
            scanf("%d", &X);
            for ( I = 1; I * I <= X; I++)
            {
                if (I * I == X)
                {
                    break;
                }
            }
            if (I * I == X)
            {
                printf("%d la so chinh phuong \n", X);
            }
            else
            {
                printf("%d khong la so chinh phuong \n", X);
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