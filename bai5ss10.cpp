#include <stdio.h>
int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    int arr[100];
    
    printf("arr = ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int value;
    printf("value = ");
    scanf("%d", &value);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }

    printf("%d\n", count);
    
    return 0;
}
