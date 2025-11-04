#include <stdio.h>
#define MAX 100
int arr[MAX];
int n = 0; 

void showMenu() {
    printf("\n");
    printf("---------------- Quản lý danh sách số nguyên  ----------------\n");
    printf("1. Them phan tu vao vi tri bat ky\n");
    printf("2. Xoa phan tu o vi tri bat ky\n");
    printf("3. Cap nhat gia tri tai vi tri bat ky\n");
    printf("4. Tim kiem phan tu trong mang\n");
    printf("5. Hien thi mang\n");
    printf("6. Sap xep mang (Bubble Sort)\n");
    printf("7. Thoat chuong trinh\n");
    printf("------------------------------------------------------------\n");
    printf("Nhap lua chon: ");
}

void insertElement() {
    if (n >= MAX) {
        printf("Mang da day! Khong the them.\n");
        return;
    }
    int pos, value;
    printf("Nhap vi tri can them (0 den %d): ", n);
    scanf("%d", &pos);
    if (pos < 0 || pos > n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap gia tri: ");
    scanf("%d", &value);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
    printf("Da them %d vao vi tri %d.\n", value, pos);
}

void deleteElement() {
    if (n == 0) {
        printf("Mang rong! Khong co phan tu de xoa.\n");
        return;
    }
    int pos;
    printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    printf("Da xoa phan tu %d tai vi tri %d.\n", arr[pos], pos);

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void updateElement() {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    int pos, value;
    printf("Nhap vi tri can cap nhat (0 den %d): ", n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    printf("Da cap nhat tu %d thanh %d tai vi tri %d.\n", arr[pos], value, pos);
    arr[pos] = value;
}

void searchElement() {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    int value;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);

    int found = 0;
    printf("Ket qua tim kiem: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf("%d (vi tri %d) ", value, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay.\n");
    } else {
        printf("\n");
    }
}

void displayArray() {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    printf("Mang hien tai (%d phan tu): ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort() {
    if (n <= 1) {
        printf("Mang qua ngan hoac da sap xep!\n");
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Ho�n �?i
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
    printf("Da sap xep mang tang dan.\n");
}

int main() {
    int choice;

    do {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertElement();
                break;
            case 2:
                deleteElement();
                break;
            case 3:
                updateElement();
                break;
            case 4:
                searchElement();
                break;
            case 5:
                displayArray();
                break;
            case 6:
                bubbleSort();
                displayArray();
                break;
            case 7:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 7);

    return 0;
}
