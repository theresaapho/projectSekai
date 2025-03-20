#include <stdio.h>
#include <math.h>
#include <conio.h> // Thư viện cho các hàm điều khiển console trên Windows
#include <windows.h> // Thư viện để sử dụng các hàm điều khiển console

int main() {
    int option;
    printf("Welcome to invertible matrix calculate.\n");
    printf("Choose your matrix pattern: \n");
    printf("1. 2x2\n2. 3x3\n3. 4x4\n");
       
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
            int Determinant2x2 = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
            if(Determinant2x2 == 0){
                printf("No invertible matrix");
            }else{
            
            int C00 = matrix[1][1];
            int C01 = - matrix[1][0];
            int C10 = - matrix[0][1];
            int C11 = matrix[0][0];

            float finmatrix[2][2] = {
                {C00, C10},
                {C01, C11}
            };
            float scalar = 1.0/Determinant2x2;
            
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    finmatrix[i][j] *= scalar; //*= là phép toán nhân từng phần tử với scalar
                }
            }
            printf("Your invertible matrix is: \n");
            for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        printf("\033[1;3m%.2f\033[0m\t", finmatrix[i][j]); // "\033" là bắt đầu chuỗi điều khiển ANSI, 1m là in đậm, 3m là in nghiêng, 0m là bay màu.
                    }
                    printf("\n");
            }
        }
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
            int Determinant3x3 = (matrix[0][0] * matrix [1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][2]);
            if(Determinant3x3 == 0){
                printf("No invertible matrix");
            }else{
                int C00 = (matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]);
                int C01 = -((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]));
                int C02 = (matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]);
                int C10 = -((matrix[0][1] * matrix[2][2]) - (matrix[0][2] * matrix[2][1]));
                int C11 = (matrix[0][0] * matrix[2][2]) - (matrix[0][2] * matrix[2][0]);
                int C12 = -((matrix[0][0] * matrix[2][1]) - (matrix[0][1] * matrix[2][0]));
                int C20 = (matrix[0][1] * matrix[1][2]) - (matrix[0][2] * matrix[1][1]);
                int C21 = -((matrix[0][0] * matrix[1][2]) - (matrix[0][2] * matrix[1][0]));
                int C22 = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

                float finmatrix[3][3] = {
                    {C00, C10, C20},
                    {C01, C11, C21},
                    {C02, C12, C22}
                };
                float scalar = 1.0/Determinant3x3;
            
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    finmatrix[i][j] *= scalar;
                }
            }
            printf("Your invertible matrix is: \n");
            for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        printf("\033[1;3m%.2f\033[0m\t", finmatrix[i][j]); // "\033" là bắt đầu chuỗi điều khiển ANSI, 1m là in đậm, 3m là in nghiêng, 0m là bay màu.
                    }
                    printf("\n");
            }
        }

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
            int det00 = (matrix[0][1] * matrix[1][2] * matrix[2][3] + matrix[0][2] * matrix[1][3] * matrix[2][1] + matrix[0][3] * matrix[1][1] * matrix[2][2]) - (matrix[0][3] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][3] * matrix[2][2] + matrix[0][2] * matrix[1][1] * matrix[2][3]);
            int det01 = (matrix[0][0] * matrix[1][2] * matrix[2][3] + matrix[0][2] * matrix[1][3] * matrix[2][0] + matrix[0][3] * matrix[1][0] * matrix[2][2]) - (matrix[0][3] * matrix[1][2] * matrix[2][0] + matrix[0][0] * matrix[1][3] * matrix[2][2] + matrix[0][2] * matrix[1][0] * matrix[2][3]);
            int det02 = (matrix[0][0] * matrix[1][1] * matrix[2][3] + matrix[0][1] * matrix[1][3] * matrix[2][0] + matrix[0][3] * matrix[1][0] * matrix[2][1]) - (matrix[0][3] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][3] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][3]);
            int det03 = (matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][2]);
        double base1 = matrix[3][0];
        double base2 = matrix[3][1];
        double base3 = matrix[3][2];
        double base4 = matrix[3][3];
        double exponent1 = 3;
        double exponent2 = 4;
        double exponent3 = 5;
        double exponent4 = 6;
        double result1 = pow(-1, exponent1);
        double result2 = pow(-1, exponent2);
        double result3 = pow(-1, exponent3);
        double result4 = pow(-1, exponent4);

        float Determinant4x4 = base1 * result1 * det00 + base2 * result2 * det01 + base3 * result3 * det02 + base4 * result4 * det03;
        if(Determinant4x4 == 0){
            printf("No invertible matrix");
        }else{
            int C00 = (matrix[1][1] * matrix[2][2] * matrix[3][3] + matrix[1][2] * matrix[2][3] * matrix[3][1] + matrix[1][3] * matrix[2][1] * matrix[3][2]) - (matrix[1][3] * matrix[2][2] * matrix[3][1] + matrix[1][1] * matrix[2][3] * matrix[3][2] + matrix[1][2] * matrix[2][1] * matrix[3][3]);
            int C01 = (matrix[1][0] * matrix[2][2] * matrix[3][3] + matrix[1][2] * matrix[2][3] * matrix[3][0] + matrix[1][3] * matrix[2][0] * matrix[3][2]) - (matrix[1][3] * matrix[2][2] * matrix[3][0] + matrix[1][0] * matrix[2][3] * matrix[3][2] + matrix[1][2] * matrix[2][0] * matrix[3][3]);
            int C02 = (matrix[1][0] * matrix[2][1] * matrix[3][3] + matrix[1][1] * matrix[2][3] * matrix[3][0] + matrix[1][3] * matrix[2][0] * matrix[3][1]) - (matrix[1][3] * matrix[2][1] * matrix[3][0] + matrix[1][0] * matrix[2][3] * matrix[3][1] + matrix[1][1] * matrix[2][0] * matrix[3][3]);
            int C03 = (matrix[1][0] * matrix[2][1] * matrix[3][2] + matrix[1][1] * matrix[2][2] * matrix[3][0] + matrix[1][2] * matrix[2][0] * matrix[3][1]) - (matrix[1][2] * matrix[2][1] * matrix[3][0] + matrix[1][0] * matrix[2][2] * matrix[3][1] + matrix[1][1] * matrix[2][0] * matrix[3][2]);
            int C10 = (matrix[0][1] * matrix[2][2] * matrix[3][3] + matrix[0][2] * matrix[2][3] * matrix[3][1] + matrix[0][3] * matrix[2][1] * matrix[3][2]) - (matrix[0][3] * matrix[2][2] * matrix[3][1] + matrix[0][1] * matrix[2][3] * matrix[3][2] + matrix[0][2] * matrix[2][1] * matrix[3][3]);
            int C11 = (matrix[0][0] * matrix[2][3] * matrix[3][3] + matrix[0][2] * matrix[2][3] * matrix[3][0] + matrix[0][3] * matrix[2][0] * matrix[3][2]) - (matrix[0][3] * matrix[2][2] * matrix[3][0] + matrix[0][0] * matrix[2][3] * matrix[3][2] + matrix[0][2] * matrix[2][0] * matrix[3][3]);
            int C12 = (matrix[0][0] * matrix[2][1] * matrix[3][3] + matrix[0][1] * matrix[2][3] * matrix[3][0] + matrix[0][3] * matrix[2][0] * matrix[3][1]) - (matrix[0][3] * matrix[2][1] * matrix[3][0] + matrix[0][0] * matrix[2][3] * matrix[3][1] + matrix[0][1] * matrix[2][0] * matrix[3][3]);
            int C13 = (matrix[1][0] * matrix[2][1] * matrix[3][2] + matrix[1][1] * matrix[2][2] * matrix[3][0] + matrix[1][2] * matrix[2][0] * matrix[3][1]) - (matrix[1][2] * matrix[2][1] * matrix[3][0] + matrix[1][0] * matrix[2][2] * matrix[3][1] + matrix[1][1] * matrix[2][0] * matrix[3][2]);
            int C20 = (matrix[0][1] * matrix[1][2] * matrix[3][3] + matrix[0][2] * matrix[1][3] * matrix[3][1] + matrix[0][3] * matrix[1][1] * matrix[3][2]) - (matrix[0][3] * matrix[1][2] * matrix[3][1] + matrix[0][1] * matrix[1][3] * matrix[3][2] + matrix[0][2] * matrix[1][1] * matrix[3][3]);
            int C21 = (matrix[0][0] * matrix[1][2] * matrix[3][3] + matrix[0][2] * matrix[1][3] * matrix[3][0] + matrix[0][3] * matrix[1][0] * matrix[3][2]) - (matrix[0][3] * matrix[1][2] * matrix[3][0] + matrix[0][0] * matrix[1][3] * matrix[3][2] + matrix[0][2] * matrix[1][0] * matrix[3][3]);
            int C22 = (matrix[0][0] * matrix[1][1] * matrix[3][3] + matrix[0][1] * matrix[1][3] * matrix[3][0] + matrix[0][3] * matrix[1][0] * matrix[3][1]) - (matrix[0][3] * matrix[1][1] * matrix[3][0] + matrix[0][0] * matrix[1][3] * matrix[3][1] + matrix[0][1] * matrix[1][0] * matrix[3][3]);
            int C23 = (matrix[0][0] * matrix[1][1] * matrix[3][2] + matrix[0][1] * matrix[1][2] * matrix[3][0] + matrix[0][2] * matrix[1][0] * matrix[3][1]) - (matrix[0][2] * matrix[1][1] * matrix[3][0] + matrix[0][0] * matrix[1][2] * matrix[3][1] + matrix[0][1] * matrix[1][0] * matrix[3][2]);
            int C30 = (matrix[0][1] * matrix[1][2] * matrix[2][3] + matrix[0][2] * matrix[1][3] * matrix[2][1] + matrix[0][3] * matrix[1][1] * matrix[2][2]) - (matrix[0][3] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][3] * matrix[2][2] + matrix[0][2] * matrix[1][1] * matrix[2][3]);
            int C31 = (matrix[0][0] * matrix[1][2] * matrix[2][3] + matrix[0][2] * matrix[1][3] * matrix[2][0] + matrix[0][3] * matrix[1][0] * matrix[2][2]) - (matrix[0][3] * matrix[1][2] * matrix[2][0] + matrix[0][0] * matrix[1][3] * matrix[2][2] + matrix[0][2] * matrix[1][0] * matrix[2][3]);
            int C32 = (matrix[0][0] * matrix[1][1] * matrix[2][3] + matrix[0][1] * matrix[1][3] * matrix[2][0] + matrix[0][3] * matrix[1][0] * matrix[2][1]) - (matrix[0][3] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][3] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][3]);
            int C33 = (matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][2]);

            float finmatrix[4][4] = {
                {C00, C10, C20, C30},
                {C01, C11, C21, C31},
                {C02, C12, C22, C32},
                {C03, C13, C23, C33},
            };
            float scalar = 1.0/Determinant4x4;
        
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                finmatrix[i][j] *= scalar;
            }
        }
        printf("Your invertible matrix is: \n");
        for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    printf("\033[1;3m%.2f\033[0m\t", finmatrix[i][j]); // "\033" là bắt đầu chuỗi điều khiển ANSI, 1m là in đậm, 3m là in nghiêng, 0m là bay màu.
                }
                printf("\n");
            }
            break;
            default:
            printf("Invalid choice.");
            break;
        }
    }
    return 0;
}