#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int option;
    printf("Welcome to matrix determinant calcul4ate.\n");
    printf("Choose your matrix pattern: \n");
    printf("1. 2x2\n2. 3x3\n3. 4x4\n");
    //
    
    // Đọc từng ký tự từ bàn phím
    char ch = _getch(); // Đọc ký tự mà không cần nhấn Enter
    option = ch - '0'; // Chuyển ký tự thành số ASCII 0 = 48, 1 = 49,..... 9 = 57; => nhập số 1 => lấy 1(49) - 0(48) => giá trị 1 cần nhập

    int matrix[4][4];

    switch (option) {
        case 1: 
            printf("You choose 2x2 matrix.\nEnter 4 numbers: \n");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    scanf("%d", &matrix[i][j]);
                }
            }
            printf("Your matrix is: \n");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    printf("%d   ", matrix[i][j]);
                }
                printf("\n");
            }
            printf("Determinant: %d\n", matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
            break;

        case 2:
            printf("You choose 3x3 matrix.\nEnter 9 numbers: \n");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    scanf("%d", &matrix[i][j]);
                }
            }
            printf("Your matrix is: \n");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    printf("%d   ", matrix[i][j]);
                }
                printf("\n");
            }
            printf("Determinant: %d\n", (matrix[0][0] * matrix [1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][2]));
            break;

        case 3:
            printf("You choose 4x4 matrix.\nEnter 16 numbers: \n");
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    scanf("%d", &matrix[i][j]);
                }
            }
            printf("Your matrix is: \n");
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    printf("%d   ", matrix[i][j]);
                }
                printf("\n");
            }
                int det30 = -((matrix[0][1] * matrix[1][2] * matrix[2][3] + matrix[0][2] * matrix[1][3] * matrix[2][1] + matrix[0][3] * matrix[1][1] * matrix[2][2]) - (matrix[0][3] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][3] * matrix[2][2] + matrix[0][2] * matrix[1][1] * matrix[2][3]));
                int det31 = (matrix[0][0] * matrix[1][2] * matrix[2][3] + matrix[0][2] * matrix[1][3] * matrix[2][0] + matrix[0][3] * matrix[1][0] * matrix[2][2]) - (matrix[0][3] * matrix[1][2] * matrix[2][0] + matrix[0][0] * matrix[1][3] * matrix[2][2] + matrix[0][2] * matrix[1][0] * matrix[2][3]);
                int det32 = -((matrix[0][0] * matrix[1][1] * matrix[2][3] + matrix[0][1] * matrix[1][3] * matrix[2][0] + matrix[0][3] * matrix[1][0] * matrix[2][1]) - (matrix[0][3] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][3] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][3]));
                int det33 = (matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][2]);
            

            printf("Determinant: %d", matrix[3][0] * det30 + matrix[3][1] * det31 + matrix[3][2] * det32 + matrix[3][3] * det33);
            break;

        default:
            printf("Invalid choice.");
            break;
    }

    return 0;
}
