#include <stdio.h>
int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    return 1;
}
}
void printAndCheckPrime(int array[], int size) {
    int countPrime = 0;
    printf("Cac so trong mang va ket qua kiem tra so nguyen to:\n");
    for (int i = 0; i < size; i++) {
        printf("%d: ", array[i]);
        if (isPrime(array[i])) {
            printf("La so nguyen to\n");
            countPrime++;
        } else {
            printf("khong phai la so nguyen to\n");
        }
    }
    printf("So luong so nguyen trong mang: %d\n", countPrime);
}
int main() {
    int array1[100], array2[100];
    int size1, size2;
    printf("Nhap so phan tu cho mang  1: ");
    scanf("%d", &size1);
    printf("Nhap cac phan tu cho mang  1:\n");
    for (int i = 0; i < size1; i++) {
        printf("array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }
    printf("nhap so phan tu cho mang 2: ");
    scanf("%d", &size2);
    printf("nhap cac phan tu cho mang 2:\n");
    for (int i = 0; i < size2; i++) {
        printf("array2[%d]: ", i);
        scanf("%d", &array2[i]);
    }
    printf("\nMang 1:\n");
    printAndCheckPrime(array1, size1);
    printf("\nmang 2:\n");
    printAndCheckPrime(array2, size2);
    if (size1 > size2) {
        printf("\nMang 1 co nhieu so nguyen to hon mang 2.\n");
    } else if (size1 < size2) {
        printf("\nMang 2 co nhieu so nguyen to hon mang 1.\n");
    } else {
        printf("\nHai mang co so nguyen to bang nhau.\n");
    }
    return 0;
}

