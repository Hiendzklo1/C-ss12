#include <stdio.h>
void nhapMang(int mang[], int *soPhanTu) {
    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", soPhanTu);
    printf("Nhap gia tri cho tung phan tu:\n");
    for (int i = 0; i < *soPhanTu; i++) {
        printf("mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }
}
void inMang(int mang[], int soPhanTu) {
    printf("Gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < soPhanTu; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}
void themPhanTu(int mang[], int *soPhanTu, int viTri, int giaTri) {
    if (*soPhanTu < 100) {
        for (int i = *soPhanTu; i > viTri; i--) {
            mang[i] = mang[i - 1];
        }
        mang[viTri] = giaTri;
        (*soPhanTu)++;
        printf("Da them phan tu vao mang.\n");
    } else {
        printf("Mang da dat toi so luong phan tu toi da.\n");
    }
}
void suaPhanTu(int mang[], int soPhanTu, int viTri, int giaTri) {
    if (viTri >= 0 && viTri < soPhanTu) {
        mang[viTri] = giaTri;
        printf("Da sua phan tu trong mang.\n");
    } else {
        printf("Vi tri khong hop le.\n");
    }
}
void xoaPhanTu(int mang[], int *soPhanTu, int viTri) {
    if (viTri >= 0 && viTri < *soPhanTu) {
        for (int i = viTri; i < *soPhanTu - 1; i++) {
            mang[i] = mang[i + 1];
        }
        (*soPhanTu)--;
        printf("Da xoa phan tu khoi mang.\n");
    } else {
        printf("Vi tri khong hop le.\n");
    }
}
void sapXepMang(int mang[], int soPhanTu, int kieuSapXep) {
    if (kieuSapXep == 1) {
        for (int i = 0; i < soPhanTu - 1; i++) {
            for (int j = i + 1; j < soPhanTu; j++) {
                if (mang[i] > mang[j]) {
                    int temp = mang[i];
                    mang[i] = mang[j];
                    mang[j] = temp;
                }
            }
        }
    } else if (kieuSapXep == 2) {
        for (int i = 0; i < soPhanTu - 1; i++) {
            for (int j = i + 1; j < soPhanTu; j++) {
                if (mang[i] < mang[j]) {
                    int temp = mang[i];
                    mang[i] = mang[j];
                    mang[j] = temp;
                }
            }
        }
    } else {
        printf("Loai sap xep khong hop le.\n");
    }
}
int timKiemPhanTu(int mang[], int soPhanTu, int giaTri) {
    for (int i = 0; i < soPhanTu; i++) {
        if (mang[i] == giaTri) {
            return i;
        }
    }
    return -1;
}
void menuSapXep(int mang[], int soPhanTu) {
    int kieuSapXep;
    printf("Chon kieu sap xep:\n");
    printf("1. Tang dan\n");
    printf("2. Giam dan\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &kieuSapXep);
    sapXepMang(mang, soPhanTu, kieuSapXep);
    printf("Da sap xep mang.\n");
}
int main() {
    int mang[100];
    int soPhanTu = 0;
    int choice;
    do {
        printf("\nMENU:\n");
        printf("1. Nhap so phan tu va gia tri cua mang\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu\n");
        printf("8. Thoat\n");
        printf("Chon chuc nang (1-8): ");
        switch (choice) {
            case 1:
                nhapMang(mang, &soPhanTu);
                break;
            case 2:
                inMang(mang, soPhanTu);
                break;
            case 3:
                {
                    int viTri, giaTri;
                    printf("Nhap vi tri can them: ");
                    scanf("%d", &viTri);
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &giaTri);
                    themPhanTu(mang, &soPhanTu, viTri, giaTri);
                }
                break;
            case 4:
                {
                    int viTri, giaTri;
                    printf("Nhap vi tri can sua: ");
                    scanf("%d", &viTri);
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &giaTri);
                    suaPhanTu(mang, soPhanTu, viTri, giaTri);
                }
                break;
            case 5:
                {
                    int viTri;
                    printf("Nhap vi tri can xoa: ");
                    scanf("%d", &viTri);
                    xoaPhanTu(mang, &soPhanTu, viTri);
                }
                break;
            case 6:
                menuSapXep(mang, soPhanTu);
                break;
            case 7:
                {
                    int giaTri, viTri;
                    printf("Nhap gia tri can tim kiem: ");
                    scanf("%d", &giaTri);
                    viTri = timKiemPhanTu(mang, soPhanTu, giaTri);
                    if (viTri != -1) {
                        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", giaTri, viTri);
                    } else {
                        printf("Phan tu %d khong tim thay trong mang.\n", giaTri);
                    }
                }
                break;
            case 8:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }

    } while (choice != 8);
    return 0;
}

