#include <stdio.h>

int main() {
    int arr[100];  
    int n = 0, choice, value, index;
    int sumEven, max, min, primeCount, primeSum, count;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhập số phần tử và giá trị các phần tử\n");
        printf("2. In ra giá trị các phần tử đang quản lý\n");
        printf("3. In ra giá trị các phần tử chẵn và tính tổng\n");
        printf("4. In ra giá trị lớn nhất và nhỏ nhất trong mảng\n");
        printf("5. In ra các phần tử là số nguyên tố trong mảng và tính tổng\n");
        printf("6. Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử đó\n");
        printf("7. Thêm một phần tử vào vị trí chỉ định\n");
        printf("8. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhập số phần tử cần nhập: ");
                scanf("%d", &n);
                if (n > 100) {
                    printf("Số phần tử quá lớn! Chỉ có thể nhập tối đa 100 phần tử.\n");
                    n = 100;
                }
                for (int i = 0; i < n; i++) {
                    printf("Nhập phần tử thứ %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Giá trị các phần tử đang quản lý: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                sumEven = 0;
                printf("Các phần tử chẵn: ");
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sumEven += arr[i];
                    }
                }
                printf("\nTổng các phần tử chẵn: %d\n", sumEven);
                break;

            case 4:
                max = arr[0];
                min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                printf("Giá trị lớn nhất trong mảng: %d\n", max);
                printf("Giá trị nhỏ nhất trong mảng: %d\n", min);
                break;

            case 5:
                primeCount = 0;
                primeSum = 0;
                printf("Các số nguyên tố trong mảng: ");
                for (int i = 0; i < n; i++) {
                    if (isPrime(arr[i])) {
                        printf("%d ", arr[i]);
                        primeCount++;
                        primeSum += arr[i];
                    }
                }
                printf("\nTổng các số nguyên tố: %d\n", primeSum);
                printf("Số lượng số nguyên tố: %d\n", primeCount);
                break;

            case 6:
                printf("Nhập vào một số để thống kê: ");
                scanf("%d", &value);
                count = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        count++;
                    }
                }
                printf("Số %d xuất hiện %d lần trong mảng.\n", value, count);
                break;

            case 7:
                printf("Nhập giá trị phần tử cần thêm: ");
                scanf("%d", &value);
                printf("Nhập vị trí cần thêm (0 đến %d): ", n);
                scanf("%d", &index);
                if (index < 0 || index > n || n >= 100) {
                    printf("Vị trí không hợp lệ hoặc mảng đã đầy!\n");
                    break;
                }
                for (int i = n; i > index; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[index] = value;
                n++;
                printf("Đã thêm phần tử %d vào vị trí %d.\n", value, index);
                break;

            case 8:
                printf("Chương trình thoát.\n");
                return 0;

            default:
                printf("Lựa chọn không hợp lệ! Vui lòng chọn lại.\n");
        }
    }

    return 0;
}
