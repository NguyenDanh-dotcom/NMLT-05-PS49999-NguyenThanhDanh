#include <stdio.h>
#include <math.h>
int main()
{
    int chon;
    do{

    printf("+----------------------------------------------------------------------+ \n");
    printf("|                            MENU ASSIGNMENT 1                         | \n");
    printf("+----------------------------------------------------------------------+ \n");
    printf("| Chuc nang  1. Kiem tra so nguyen                                     | \n");
    printf("| Chuc nang  2. Tim uc so chung va boi so chung cua 2 so               | \n");
    printf("| Chuc nang  3. Chuong trinh tinh tien cho quan karake                 | \n");
    printf("| Chuc nang  4. Tinh tien dien                                         | \n");
    printf("| Chuc nang  5. Chuc nang doi tien                                     | \n");
    printf("| Chuc nang  6. Xay dung chuc nang tinh lai xuat vay ngan hang tra gop | \n");
    printf("| Chuc nang  7. Xay dung chuong trinh vay tien mua xe                  | \n");
    printf("| Chuc nang  8. Sap xep thong tin sinh vien                            | \n");
    printf("| Chuc nang  9. Xay dung game FPOLY-LOTT                               | \n");
    printf("| Chuc nang 10. Xay dung chuong trinh tinh toan phan so                | \n");
    printf("| Chuc nang 11. Thoat chuong trinh                                     | \n");
    printf("+----------------------------------------------------------------------+ \n");
    printf("=>Nhap so (1-11): ");
    scanf("%d", &chon);
    switch (chon)
    {
    case 1:
        printf("Chuc nang 1. Kiem tra so nguyen \n");
        break;
    case 2:
        printf("Chuc nang 2. Tim uc so chung va boi so chung cua 2 so \n");
        break;
    case 3:
        printf("Chuc nang 3. Chuong trinh tinh tien cho quan karake \n");
        break;
    case 4:
        printf("Chuc nang 4. Tinh tien dien \n");
        break;
    case 5:
        printf("Chuc nang 5. Chuc nang doi tien \n");
        break;
    case 6:
        printf("Chuc nang 6. Xay dung chuc nang tinh lai xuat vay ngan hang tra gop \n");
        break;
    case 7:
        printf("Chuc nang 7. Xay dung chuong trinh vay tien mua xe \n");
        break;
    case 8:
        printf("Chuc nang 8. Sap xep thong tin sinh vien \n");
        break;
    case 9:
        printf("Chuc nang 9. Xay dung game FPOLY-LOTT \n");
        break;
    case 10:
        printf("Chuc nang 10. Xay dung chuong trinh tinh toan phan so \n");
        break;
    case 11:
        printf("Chuc nang 11. Thoat chuong trinh \n");
        break;
    default:
        printf("Phai chon tu 1 - 11 \n");
        break;
    }
    }while (chon != 11);
    return 0;
}