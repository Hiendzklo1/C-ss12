#include <stdio.h>
// Hàm tính hieu giua hai so 
int tinhHieu(int a, int b) {
    return a > b ? a - b : b - a;
}
int main() {
    int a, b, c;
    // Nhap so tu bàn phím
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    // In ket qu?
    int count = 0;
    for (int i = 1; i <= 3; i++) {
        int soThuNhat, soThuHai;
        // Lua chon cap so de in ket qua 
        switch (i) {
            case 1:
                soThuNhat = a;
                soThuHai = b;
                break;
            case 2:
                soThuNhat = b;
                soThuHai = c;
                break;
            case 3:
                soThuNhat = a;
                soThuHai = c;
                break;
            default:
                break;
        }
        // In ket qua cho tung cap so 
        printf("Cap so thu %d :\n", i);
        printf("%d + %d = %d\n", soThuNhat, soThuHai, soThuNhat + soThuHai);
        printf("%d - %d = %d\n", soThuHai, soThuNhat, tinhHieu(soThuHai, soThuNhat));
        count++;
    }
    if (count == 0) {
        printf("Khong co cap so nao de thuc hien.\n");
    }
    return 0;
}

