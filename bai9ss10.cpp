#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
              
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}


int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int prices[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    
    int id;
    scanf("%d", &id);

    int target_price = -1;
    if (id >= 0 && id < n) {
        target_price = prices[id];
    }

    if (target_price != -1) {
        printf("%d\n", target_price);
    } else {

    }

    for (int i = 0; i < n; i++) {
        printf("%d ", prices[i]);
    }
    printf("\n");
    
    return 0;
}
