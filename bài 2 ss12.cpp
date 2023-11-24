#include <stdio.h>
// Hàm tính giai thua cua mot so 
int tinhGiaiThua(int n) {
    int giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}
int main() {
    int a, b, c;
    // Nhap so tu bàn phím
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    // In ket qua 
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
        printf("%d * %d = %d\n", soThuNhat, soThuHai, soThuNhat * soThuHai);
        // Kiem tra thuong có phai so nguyên hay không
        if (soThuHai != 0 && soThuNhat % soThuHai == 0) {
            printf("%d / %d = %d\n", soThuNhat, soThuHai, soThuNhat / soThuHai);
        } else {
            printf("%d khong chia het cho %d\n", soThuHai, soThuNhat);
        }
        count++;
    }
    if (count == 0) {
        printf("Khong co cap so nao de thuc hien.\n");
    }
    return 0;
}

