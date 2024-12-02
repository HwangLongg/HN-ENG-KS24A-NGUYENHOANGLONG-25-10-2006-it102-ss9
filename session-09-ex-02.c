#include <stdio.h>

int main() {
    int mang[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  
    int viTri, giaTriMoi;

    printf("Mảng ban đầu: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    
    printf("Nhập vị trí cần sửa (0 đến 9): ");
    scanf("%d", &viTri);
    if (viTri < 0 || viTri >= 10) {
        printf("Vị trí không hợp lệ.\n");
        return 1; 
    }

    printf("Nhập giá trị mới: ");
    scanf("%d", &giaTriMoi);

 
    mang[viTri] = giaTriMoi;

  
    printf("Mảng sau khi sửa: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
