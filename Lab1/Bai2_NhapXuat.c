#include <stdio.h>

int main() {
    // Khai báo các biến với độ dài chuỗi phù hợp
    char mssv[20];
    char hoVaTen[50];
    int namSinh;
    float diemTrungBinh;

    // --- LUỒNG NHẬP DỮ LIỆU ---
    printf("Nhap ma so sinh vien (MSSV): ");
    scanf("%s", mssv);

    printf("Nhap ho va ten sinh vien: ");
    // %[^\n] giúp nhận chuỗi có khoảng trắng, khoảng trống ở trước để xóa bộ nhớ đệm
    scanf(" %[^\n]", hoVaTen); 

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTrungBinh);

    // Tính toán số tuổi dựa trên năm hiện tại là 2026
    int tuoi = 2026 - namSinh;

    printf("\n-----------------------------------\n");

    // --- LUỒNG XUẤT DỮ LIỆU (Đúng định dạng mẫu) ---
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoVaTen);
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", tuoi);
    
    // In điểm trung bình (ở đây mình dùng %.2f để lấy 2 chữ số thập phân cho đẹp, 
    // bạn có thể đổi thành %f nếu muốn in đầy đủ số 0 phía sau)
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh);

    return 0;
}