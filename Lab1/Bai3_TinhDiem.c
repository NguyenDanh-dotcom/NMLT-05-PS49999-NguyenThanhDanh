#include <stdio.h>

int main() {
    // Khai báo các biến
    char mssv[20];
    char hoVaTen[50];
    float diemToan, diemLy, diemHoa;
    float diemTrungBinh;

    // --- LUỒNG NHẬP DỮ LIỆU ---
    printf("Nhap ma so sinh vien (MSSV): ");
    scanf("%s", mssv);

    printf("Nhap ho va ten sinh vien: ");
    // Sử dụng " %[^\n]" để đọc trọn vẹn họ tên có khoảng trắng và không bị trôi lệnh
    scanf(" %[^\n]", hoVaTen);

    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);

    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);

    printf("Nhap diem Hoa: ");
    scanf("%f", &diemHoa);

    // --- CÔNG THỨC TÍNH TOÁN ---
    // Điểm Toán nhân hệ số 2, tổng hệ số là 4
    diemTrungBinh = (diemToan * 2 + diemLy + diemHoa) / 4;

    printf("\n-----------------------------------\n");

    // --- LUỒNG XUẤT DỮ LIỆU (Đúng định dạng mẫu) ---
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoVaTen);
    
    // Sử dụng %.2f để làm tròn đến 2 chữ số thập phân theo yêu cầu
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh);

    return 0;
}