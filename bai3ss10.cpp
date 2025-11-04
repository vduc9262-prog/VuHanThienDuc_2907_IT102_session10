#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[100]; // Gia su toi da 100 phan tu

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhap so can tim: ");
    scanf("%d", &x);

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Tim thay tai chi so: %d\n", index);
    } else {
        printf("Khong tim thay\n");
    }

    return 0;
}
