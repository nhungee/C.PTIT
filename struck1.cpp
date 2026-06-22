//nhập Tên, Tuổi, Địa chỉ và Điểm Toán trên cùng một dòng, cách nhau bởi khoảng trắng:
//NguyenVanA 20 HaNoi 8.5

#include <stdio.h>

struct SinhVien {
    char ten[50];
    int tuoi;
    char dia_chi[100];
    float diem_toan;
};

int main() {
    struct SinhVien ds[5];
    int i;

    printf("Nhap thong tin (Ten Tuoi DiaChi DiemToan) cho 5 sinh vien:\n");

    for (i = 0; i < 5; i++) {
        printf("Sinh vien %d: ", i + 1);
        scanf("%s%d%s%f", ds[i].ten, &ds[i].tuoi, ds[i].dia_chi, &ds[i].diem_toan);
    }

    printf("\nTen va Diem Toan cua cac sinh vien:\n");
    for (i = 0; i < 5; i++) {
        printf("Sinh vien %d: %s - Diem Toan: %.2f\n", i + 1, ds[i].ten, ds[i].diem_toan);
    }

    return 0;
}