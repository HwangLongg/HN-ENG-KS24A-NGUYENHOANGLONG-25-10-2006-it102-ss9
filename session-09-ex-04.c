#include <stdio.h>

int main() {
    int arr[100];
    int currentLength = 0;
    int choice, value, index;

    while (1) {
        printf("\nMENU:\n");
        printf("1. Nhập vào mảng\n");
        printf("2. Hiển thị mảng\n");
        printf("3. Thêm phần tử\n");
        printf("4. Sửa phần tử\n");
        printf("5. Xóa phần tử\n");
        printf("6. Thoát\n");
        printf("Chọn chức năng: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhập số phần tử: ");
                scanf("%d", &currentLength);
                if (currentLength > 100) {
                    printf("Quá số lượng phần tử cho phép!\n");
                    currentLength = 100;
                }
                for (int i = 0; i < currentLength; i++) {
                    printf("Nhập phần tử thứ %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Mảng hiện tại: ");
                for (int i = 0; i < currentLength; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Nhập giá trị phần tử cần thêm: ");
                scanf("%d", &value);
                printf("Nhập vị trí cần thêm (0 đến %d): ", currentLength);
                scanf("%d", &index);
                if (index < 0 || index > currentLength || currentLength >= MAX_SIZE) {
                    printf("Vị trí không hợp lệ hoặc mảng đã đầy!\n");
                    break;
                }
                for (int i = currentLength; i > index; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[index] = value;
                currentLength++;
                printf("Đã thêm phần tử %d vào vị trí %d.\n", value, index);
                break;

            case 4:
                printf("Nhập vị trí phần tử cần sửa (0 đến %d): ", currentLength - 1);
                scanf("%d", &index);
                if (index < 0 || index >= currentLength) {
                    printf("Vị trí không hợp lệ!\n");
                    break;
                }
                printf("Nhập giá trị mới: ");
                scanf("%d", &value);
                arr[index] = value;
                printf("Đã sửa phần tử tại vị trí %d thành %d.\n", index, value);
                break;

            case 5:
                printf("Nhập vị trí phần tử cần xóa (0 đến %d): ", currentLength - 1);
                scanf("%d", &index);
                if (index < 0 || index >= currentLength) {
                    printf("Vị trí không hợp lệ!\n");
                    break;
                }
                for (int i = index; i < currentLength - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                currentLength--;
                printf("Đã xóa phần tử tại vị trí %d.\n", index);
                break;

            case 6:
                printf("Chương trình thoát.\n");
                return 0;

            default:
                printf("Lựa chọn không hợp lệ! Vui lòng chọn lại.\n");
        }
    }

    return 0;
}
