#include <stdio.h>

int main() {
    int arr[100];
    int currentLength, index, value;

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

    printf("Nhập vị trí cần thêm (0 đến %d): ", currentLength);
    scanf("%d", &index);

    if (index < 0 || index > currentLength) {
        printf("Vị trí không hợp lệ.\n");
        return 1;
    }

    printf("Nhập giá trị muốn thêm: ");
    scanf("%d", &value);

    if (index == currentLength) {
        arr[index] = value;  
        currentLength++;
    } else {
        for (int i = currentLength; i > index; i--) {
            arr[i] = arr[i - 1];  
        }
        arr[index] = value; 
        currentLength++;
    }

    printf("Mảng sau khi thêm phần tử: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
