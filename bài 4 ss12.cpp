#include <stdio.h>
// Hàm kiem tra mang có phai là mang doi xung hay không
int laMangDoiXung(int mang[], int soPhanTu) {
    for (int i = 0, j = soPhanTu - 1; i < j; i++, j--) {
        if (mang[i] != mang[j]) {
            return 0; // Không phai mang doi xung
        }
    }
    return 1; // Là mang doi xung
}
// Hàm in ket qua kiem tra mang doi xung
void inKetQua(int mang[], int soPhanTu) {
    if (laMangDoiXung(mang, soPhanTu)) {
        printf("La mang doi xung.\n");
    } else {
        printf("Khong la mang doi xung.\n");
    }
}
int main() {
    int arrayOne[] = {1, 2, 3, 2, 1};
    int arrayTwo[] = {'a', 'n', 'n', 'a', 'a'};
    int soPhanTuArrayOne = sizeof(arrayOne) / sizeof(arrayOne[0]);
    int soPhanTuArrayTwo = sizeof(arrayTwo) / sizeof(arrayTwo[0]);
    // In ket qua kiem tra cho mang arrayOne
    printf("arrayOne la ");
    inKetQua(arrayOne, soPhanTuArrayOne);
    // In ket qua kiem tra cho mang arrayTwo
    printf("arrayTwo ");
    inKetQua(arrayTwo, soPhanTuArrayTwo);
    return 0;
}

