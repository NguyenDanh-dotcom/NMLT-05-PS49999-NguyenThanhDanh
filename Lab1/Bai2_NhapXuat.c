#include <stdio.h>

int main() {
    // Khai báo các biến với độ dài chuỗi phù hợp
    char MSSV[20];
    char HoVaTen[50];
    int NamSinh;
    float DiemTrungBinh;

    // --- LUỒNG NHẬP DỮ LIỆU ---
    printf("Nhap ma so sinh vien (MSSV): ");
    scanf("%s", MSSV);

    printf("Nhap ho va ten sinh vien: ");
    // %[^\n] giúp nhận chuỗi có khoảng trắng, khoảng trống ở trước để xóa bộ nhớ đệm
    scanf(" %[^\n]", HoVaTen); 

    printf("Nhap nam sinh: ");
    scanf("%d", &NamSinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &DiemTrungBinh);

    // Tính toán số tuổi dựa trên năm hiện tại là 2026
    int tuoi = 2026 - NamSinh;

    printf("\n-----------------------------------\n");

    // --- LUỒNG XUẤT DỮ LIỆU  ---
    printf("Ma so sinh vien: %s\n", MSSV);
    printf("Ho Va Ten: %s\n", HoVaTen);
    printf("Nam sinh: %d\n", NamSinh);
    printf("Tuoi: %d\n", tuoi);
    
    // In điểm trung bình (ở đây mình dùng %.2f để lấy 2 chữ số thập phân cho đẹp, 
    // bạn có thể đổi thành %f nếu muốn in đầy đủ số 0 phía sau)
    printf("Diem Trung Binh: %.2f\n", DiemTrungBinh);

    return 0;
}