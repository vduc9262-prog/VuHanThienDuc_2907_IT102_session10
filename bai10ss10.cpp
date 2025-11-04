#include <stdio.h>
int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Hoán ğ?i
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int target;
    scanf("%d", &target);

    int min_val = findMin(arr, n);
    printf("So nguyen nho nhat trong mang la: %d\n", min_val);

    selectionSort(arr, n);

    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int result = binarySearch(arr, n, target);
    
    if (result != -1) {
        printf("Phan tu %d co chi so %d trong mang da sap xep.\n", target, result);
    } else {
        printf("Khong tim thay\n");
    }
    
    return 0;
} 
