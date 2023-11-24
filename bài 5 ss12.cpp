#include <stdio.h>
int laSoNguyenTo(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
void inMaTran(int matran[][100], int n, int m) {
    printf("Ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matran[i][j]);
        }
        printf("\n");
    }
}
void inGocMaTran(int matran[][100], int n, int m) {
    printf("Cac phan tu o goc theo ma tran:\n");
    printf("Goc tren trai: %d\n", matran[0][0]);
    printf("Goc tren phai: %d\n", matran[0][m - 1]);
    printf("Goc duoi trai: %d\n", matran[n - 1][0]);
    printf("Goc duoi phai: %d\n", matran[n - 1][m - 1]);
}
void inDuongBienMaTran(int matran[][100], int n, int m) {
    printf("Cac phan tu tren duong bien theo ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                printf("%d ", matran[i][j]);
            } else {
                printf("0 ");
            }
        }
    }
    printf("\n");
}
void inDuongCheoMaTran(int matran[][100], int n, int m) {
    printf("Cac phan tu tren duong cheo chinh va cheo phu theo ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == m - 1) {
                printf("%d ", matran[i][j]);
            } else {
                printf("0 ");
            }
        }
    }
    printf("\n");
}
void inSoNguyenToMaTran(int matran[][100], int n, int m) {
    printf("Cac so nguyen to trong ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (laSoNguyenTo(matran[i][j])) {
                printf("%d ", matran[i][j]);
            } else {
                printf("0 ");
            }
        }
    }
    printf("\n");
}
int main() {
    int matran[100][100];
    int n, m;
    int choice;
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);
    printf("Nhap gia tri cho ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matran[%d][%d]: ", i, j);
            scanf("%d", &matran[i][j]);
        }
    }
    do {
        printf("\nMENU:\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Chon chuc nang (1-7): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap gia tri cho ma tran:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("matran[%d][%d]: ", i, j);
                        scanf("%d", &matran[i][j]);
                    }
                }
                break;
            case 2:
                inMaTran(matran, n, m);
                break;
            case 3:
                inGocMaTran(matran, n, m);
                break;
            case 4:
                inDuongBienMaTran(matran, n, m);
                break;
            case 5:
                inDuongCheoMaTran(matran, n, m);
                break;
            case 6:
                inSoNguyenToMaTran(matran, n, m);
                break;
            case 7:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }

    } while (choice != 7);

    return 0;
}

