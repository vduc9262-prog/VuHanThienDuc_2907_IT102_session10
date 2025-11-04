#include <stdio.h>
int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2; 
        
        if (arr[mid] == x) {
            return mid; 
        }
        
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[100];
    printf("Nhap mang da sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int x;
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    
    int result = binarySearch(arr, n, x);
    
    if (result != -1) {
        printf("Tim thay tai chi so: %d\n", result);
    } else {
        printf("Khong tim thay\n");
    }
    
    return 0;
} 
