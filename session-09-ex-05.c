#include <stdio.h>

int main() {
    int maTran[100][100], kichCo, luaChon;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhập kích cỡ và giá trị các phần tử của mảng\n");
        printf("2. In giá trị các phần tử của mảng theo ma trận\n");
        printf("3. In giá trị các phần tử là lẻ và tính tổng\n");
        printf("4. In ra các phần tử nằm trên đường biên và tính tích\n");
        printf("5. In ra các phần tử nằm trên đường chéo chính\n");
        printf("6. In ra các phần tử nằm trên đường chéo phụ\n");
        printf("7. In ra dòng có tổng giá trị các phần tử là lớn nhất\n");
        printf("8. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1: {
                printf("Nhập kích cỡ của ma trận (n x n): ");
                scanf("%d", &kichCo);
                for (int i = 0; i < kichCo; i++) {
                    for (int j = 0; j < kichCo; j++) {
                        printf("Nhập phần tử [%d][%d]: ", i + 1, j + 1);
                        scanf("%d", &maTran[i][j]);
                    }
                }
                break;
            }
            case 2: {
                printf("Ma trận:\n");
                for (int i = 0; i < kichCo; i++) {
                    for (int j = 0; j < kichCo; j++) {
                        printf("%d ", maTran[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                int tongLai = 0;
                printf("Các phần tử lẻ: ");
                for (int i = 0; i < kichCo; i++) {
                    for (int j = 0; j < kichCo; j++) {
                        if (maTran[i][j] % 2 != 0) {
                            printf("%d ", maTran[i][j]);
                            tongLai += maTran[i][j];
                        }
                    }
                }
                printf("\nTổng các phần tử lẻ: %d\n", tongLai);
                break;
            }
            case 4: {
                int tich = 1;
                printf("Các phần tử trên đường biên: ");
                for (int i = 0; i < kichCo; i++) {
                    for (int j = 0; j < kichCo; j++) {
                        if (i == 0 || i == kichCo - 1 || j == 0 || j == kichCo - 1) {
                            printf("%d ", maTran[i][j]);
                            tich *= maTran[i][j];
                        }
                    }
                }
                printf("\nTích các phần tử trên đường biên: %d\n", tich);
                break;
            }
            case 5: {
                printf("Các phần tử trên đường chéo chính: ");
                for (int i = 0; i < kichCo; i++) {
                    printf("%d ", maTran[i][i]);
                }
                printf("\n");
                break;
            }
            case 6: {
                printf("Các phần tử trên đường chéo phụ: ");
                for (int i = 0; i < kichCo; i++) {
                    printf("%d ", maTran[i][kichCo - i - 1]);
                }
                printf("\n");
                break;
            }
            case 7: {
                int tongMax = -1, dongMax = -1;
                for (int i = 0; i < kichCo; i++) {
                    int tongDong = 0;
                    for (int j = 0; j < kichCo; j++) {
                        tongDong += maTran[i][j];
                    }
                    if (tongDong > tongMax) {
                        tongMax = tongDong;
                        dongMax = i;
                    }
                }
                printf("Dòng có tổng lớn nhất: ");
                for (int j = 0; j < kichCo; j++) {
                    printf("%d ", maTran[dongMax][j]);
                }
                printf("\nTổng của dòng: %d\n", tongMax);
                break;
            }
            case 8:
                printf("Chương trình thoát.\n");
                return 0;

            default:
                printf("Lựa chọn không hợp lệ! Vui lòng chọn lại.\n");
        }
    }

    return 0;
}