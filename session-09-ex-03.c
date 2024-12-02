#include <stdio.h>

int main() {
    int arr[100];
    int currentLength, viTriXoa;

    printf("Nhập số phần tử bạn muốn nhập (tối đa 100): ");
    scanf("%d", &currentLength);
    
    if (currentLength > 100 || currentLength <= 0) {
        printf("Số phần tử không hợp lệ.\n");
        return 1;
    }

    printf("Nhập các phần tử cho mảng:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("Phần tử %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mảng hiện tại: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhập vị trí cần xóa (0 đến %d): ", currentLength - 1);
    scanf("%d", &viTriXoa);

    if (viTriXoa < 0 || viTriXoa >= currentLength) {
        printf("Vị trí không hợp lệ.\n");
        return 1;
    }

    for (int i = viTriXoa; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }

    currentLength--;

    printf("Mảng sau khi xóa phần tử tại vị trí %d: ", viTriXoa);
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
