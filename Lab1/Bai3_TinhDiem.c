#include <stdio.h>

int main() {
    // Khai báo các biến
    char MSSV[20];
    char HoVaTen[50];
    float DiemToan, DiemLy, DiemHoa;
    float DiemTrungBinh;

    // --- LUỒNG NHẬP DỮ LIỆU ---
    printf("Nhap ma so sinh vien (MSSV): ");
    scanf("%s", MSSV);

    printf("Nhap ho va ten sinh vien: ");
    // Sử dụng " %[^\n]" để đọc trọn vẹn họ tên có khoảng trắng và không bị trôi lệnh
    scanf(" %[^\n]", HoVaTen);

    printf("Nhap diem Toan: ");
    scanf("%f", &DiemToan);

    printf("Nhap diem Ly: ");
    scanf("%f", &DiemLy);

    printf("Nhap diem Hoa: ");
    scanf("%f", &DiemHoa);

    // --- CÔNG THỨC TÍNH TOÁN ---
    // Điểm Toán nhân hệ số 2, tổng hệ số là 4
    DiemTrungBinh = (DiemToan * 2 + DiemLy + DiemHoa) / 4;

    printf("\n-----------------------------------\n");

    // --- LUỒNG XUẤT DỮ LIỆU (Đúng định dạng mẫu) ---
    printf("Ma so sinh vien: %s\n", MSSV);
    printf("Ho Va Ten: %s\n", HoVaTen);

    // Sử dụng %.2f để làm tròn đến 2 chữ số thập phân theo yêu cầu
    printf("Diem Trung Binh: %.2f\n", DiemTrungBinh);

    return 0;
}