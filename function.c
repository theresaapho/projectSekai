//update 3.0
#include "function.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Hàm từ vochong.c
int TongNam(int namSinh) {
    int sum = 0;
    do {
        sum = sum + namSinh % 10;
        namSinh /= 10;
    } while (namSinh > 0);
    return sum;
}

// Hàm từ zodiac.c
void zodiac_sign(int day, int month, int year) {
    if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Your zodiac sign is Capricorn.\n");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Your zodiac sign is Aquarius.\n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("Your zodiac sign is Pisces.\n");
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("Your zodiac sign is Aries.\n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("Your zodiac sign is Taurus.\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Your zodiac sign is Gemini.\n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("Your zodiac sign is Cancer.\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Your zodiac sign is Leo.\n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Your zodiac sign is Virgo.\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Your zodiac sign is Libra.\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Your zodiac sign is Scorpio.\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Your zodiac sign is Sagittarius.\n");
    } else {
        printf("Invalid date!\n");
    }
}

void personality(char lastname) {
    switch (tolower(lastname)) {
        case 'a':
            printf("Your personality usually are Dynamic, Creative, Independent, with leadership skills.\n");
            break;
        case 'b':
            printf("Your personality usually are Warm, delicate, caring and considerate of others.\n");
            break;
        // Thêm các case khác tương tự
        default:
            printf("No specific personality description for this last name.\n");
            break;
    }
}

// Hàm từ determinantmatrix.c
int determinant_2x2(int matrix[2][2]) {
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}

int determinant_3x3(int matrix[3][3]) {
    return (matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][2]);
}

int determinant_4x4(int matrix[4][4]) {
    int det30 = -((matrix[0][1] * matrix[1][2] * matrix[2][3] + matrix[0][2] * matrix[1][3] * matrix[2][1] + matrix[0][3] * matrix[1][1] * matrix[2][2]) - (matrix[0][3] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][3] * matrix[2][2] + matrix[0][2] * matrix[1][1] * matrix[2][3]));
    int det31 = (matrix[0][0] * matrix[1][2] * matrix[2][3] + matrix[0][2] * matrix[1][3] * matrix[2][0] + matrix[0][3] * matrix[1][0] * matrix[2][2]) - (matrix[0][3] * matrix[1][2] * matrix[2][0] + matrix[0][0] * matrix[1][3] * matrix[2][2] + matrix[0][2] * matrix[1][0] * matrix[2][3]);
    int det32 = -((matrix[0][0] * matrix[1][1] * matrix[2][3] + matrix[0][1] * matrix[1][3] * matrix[2][0] + matrix[0][3] * matrix[1][0] * matrix[2][1]) - (matrix[0][3] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][3] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][3]));
    int det33 = (matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][2]);

    return matrix[3][0] * det30 + matrix[3][1] * det31 + matrix[3][2] * det32 + matrix[3][3] * det33;
}

// Hàm từ invertiblematrix.c
void invertible_2x2(int matrix[2][2]) {
    int det = determinant_2x2(matrix);
    if (det == 0) {
        printf("No invertible matrix\n");
        return;
    }
             
    int C00 = matrix[1][1];
    int C01 = - matrix[1][0];
    int C10 = - matrix[0][1];
    int C11 = matrix[0][0];
    // Tính ma trận phụ hợp
    double finmatrix[2][2] = {
        {C00, C10},
        {C01, C11}
    };
    float scalar = 1.0 / det;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            finmatrix[i][j] *= scalar; //*= là phép toán nhân từng phần tử với scalar
        }
    }
    //in ma trận nghịch đảo
    printf("Your invertible matrix is: \n");
    for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                printf("\033[1;3m%.2f\033[0m\t", finmatrix[i][j]); // "\033" là bắt đầu chuỗi điều khiển ANSI, 1m là in đậm, 3m là in nghiêng, 0m là bay màu.
            }
            printf("\n");
    } 
}


void invertible_3x3(int matrix[3][3]) {
    int det = determinant_3x3(matrix);
    if (det == 0) {
        printf("No invertible matrix\n");
        return;
    }

    // Tính ma trận phụ hợp (adjugate matrix)
    int C00 = (matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]);
    int C01 = -((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]));
    int C02 = (matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]);

    int C10 = -((matrix[0][1] * matrix[2][2]) - (matrix[0][2] * matrix[2][1]));
    int C11 = (matrix[0][0] * matrix[2][2]) - (matrix[0][2] * matrix[2][0]);
    int C12 = -((matrix[0][0] * matrix[2][1]) - (matrix[0][1] * matrix[2][0]));

    int C20 = (matrix[0][1] * matrix[1][2]) - (matrix[0][2] * matrix[1][1]);
    int C21 = -((matrix[0][0] * matrix[1][2]) - (matrix[0][2] * matrix[1][0]));
    int C22 = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

    // Ma trận phụ hợp
    double finmatrix[3][3] = {
        {(float)C00, (float)C10, (float)C20},
        {(float)C01, (float)C11, (float)C21},
        {(float)C02, (float)C12, (float)C22}
    };

    float scalar = 1.0 / det;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            finmatrix[i][j] *= scalar; //*= là phép toán nhân từng phần tử với scalar
        }
    }

    // In ma trận nghịch đảo
    printf("Invertible matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("\033[1;3m%.2f\033[0m\t", finmatrix[i][j]);  //"\033" là bắt đầu chuỗi điều khiển ANSI, 1m là in đậm, 3m là in nghiêng, 0m là bay màu.
        }
        printf("\n");
    }
}

void invertible_4x4(int matrix[4][4]) {
    int det = determinant_4x4(matrix);
    if (det == 0) {
        printf("No invertible matrix\n");
        return;
    }

    // Tính ma trận phụ hợp
    int C00 = (matrix[1][1] * matrix[2][2] * matrix[3][3] + matrix[1][2] * matrix[2][3] * matrix[3][1] + matrix[1][3] * matrix[2][1] * matrix[3][2]) - (matrix[1][3] * matrix[2][2] * matrix[3][1] + matrix[1][1] * matrix[2][3] * matrix[3][2] + matrix[1][2] * matrix[2][1] * matrix[3][3]);
    int C01 = -((matrix[1][0] * matrix[2][2] * matrix[3][3] + matrix[1][2] * matrix[2][3] * matrix[3][0] + matrix[1][3] * matrix[2][0] * matrix[3][2]) - (matrix[1][3] * matrix[2][2] * matrix[3][0] + matrix[1][0] * matrix[2][3] * matrix[3][2] + matrix[1][2] * matrix[2][0] * matrix[3][3]));
    int C02 = (matrix[1][0] * matrix[2][1] * matrix[3][3] + matrix[1][1] * matrix[2][3] * matrix[3][0] + matrix[1][3] * matrix[2][0] * matrix[3][1]) - (matrix[1][3] * matrix[2][1] * matrix[3][0] + matrix[1][0] * matrix[2][3] * matrix[3][1] + matrix[1][1] * matrix[2][0] * matrix[3][3]);
    int C03 = -((matrix[1][0] * matrix[2][1] * matrix[3][2] + matrix[1][1] * matrix[2][2] * matrix[3][0] + matrix[1][2] * matrix[2][0] * matrix[3][1]) - (matrix[1][2] * matrix[2][1] * matrix[3][0] + matrix[1][0] * matrix[2][2] * matrix[3][1] + matrix[1][1] * matrix[2][0] * matrix[3][2]));

    int C10 = -((matrix[0][1] * matrix[2][2] * matrix[3][3] + matrix[0][2] * matrix[2][3] * matrix[3][1] + matrix[0][3] * matrix[2][1] * matrix[3][2]) - (matrix[0][3] * matrix[2][2] * matrix[3][1] + matrix[0][1] * matrix[2][3] * matrix[3][2] + matrix[0][2] * matrix[2][1] * matrix[3][3]));
    int C11 = (matrix[0][0] * matrix[2][2] * matrix[3][3] + matrix[0][2] * matrix[2][3] * matrix[3][0] + matrix[0][3] * matrix[2][0] * matrix[3][2]) - (matrix[0][3] * matrix[2][2] * matrix[3][0] + matrix[0][0] * matrix[2][3] * matrix[3][2] + matrix[0][2] * matrix[2][0] * matrix[3][3]);
    int C12 = -((matrix[0][0] * matrix[2][1] * matrix[3][3] + matrix[0][1] * matrix[2][3] * matrix[3][0] + matrix[0][3] * matrix[2][0] * matrix[3][1]) - (matrix[0][3] * matrix[2][1] * matrix[3][0] + matrix[0][0] * matrix[2][3] * matrix[3][1] + matrix[0][1] * matrix[2][0] * matrix[3][3]));
    int C13 = (matrix[0][0] * matrix[2][1] * matrix[3][2] + matrix[0][1] * matrix[2][2] * matrix[3][0] + matrix[0][2] * matrix[2][0] * matrix[3][1]) - (matrix[0][2] * matrix[2][1] * matrix[3][0] + matrix[0][0] * matrix[2][2] * matrix[3][1] + matrix[0][1] * matrix[2][0] * matrix[3][2]);

    int C20 = (matrix[0][1] * matrix[1][2] * matrix[3][3] + matrix[0][2] * matrix[1][3] * matrix[3][1] + matrix[0][3] * matrix[1][1] * matrix[3][2]) - (matrix[0][3] * matrix[1][2] * matrix[3][1] + matrix[0][1] * matrix[1][3] * matrix[3][2] + matrix[0][2] * matrix[1][1] * matrix[3][3]);
    int C21 = -((matrix[0][0] * matrix[1][2] * matrix[3][3] + matrix[0][2] * matrix[1][3] * matrix[3][0] + matrix[0][3] * matrix[1][0] * matrix[3][2]) - (matrix[0][3] * matrix[1][2] * matrix[3][0] + matrix[0][0] * matrix[1][3] * matrix[3][2] + matrix[0][2] * matrix[1][0] * matrix[3][3]));
    int C22 = (matrix[0][0] * matrix[1][1] * matrix[3][3] + matrix[0][1] * matrix[1][3] * matrix[3][0] + matrix[0][3] * matrix[1][0] * matrix[3][1]) - (matrix[0][3] * matrix[1][1] * matrix[3][0] + matrix[0][0] * matrix[1][3] * matrix[3][1] + matrix[0][1] * matrix[1][0] * matrix[3][3]);
    int C23 = -((matrix[0][0] * matrix[1][1] * matrix[3][2] + matrix[0][1] * matrix[1][2] * matrix[3][0] + matrix[0][2] * matrix[1][0] * matrix[3][1]) - (matrix[0][2] * matrix[1][1] * matrix[3][0] + matrix[0][0] * matrix[1][2] * matrix[3][1] + matrix[0][1] * matrix[1][0] * matrix[3][2]));

    int C30 = -((matrix[0][1] * matrix[1][2] * matrix[2][3] + matrix[0][2] * matrix[1][3] * matrix[2][1] + matrix[0][3] * matrix[1][1] * matrix[2][2]) - (matrix[0][3] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][3] * matrix[2][2] + matrix[0][2] * matrix[1][1] * matrix[2][3]));
    int C31 = (matrix[0][0] * matrix[1][2] * matrix[2][3] + matrix[0][2] * matrix[1][3] * matrix[2][0] + matrix[0][3] * matrix[1][0] * matrix[2][2]) - (matrix[0][3] * matrix[1][2] * matrix[2][0] + matrix[0][0] * matrix[1][3] * matrix[2][2] + matrix[0][2] * matrix[1][0] * matrix[2][3]);
    int C32 = -((matrix[0][0] * matrix[1][1] * matrix[2][3] + matrix[0][1] * matrix[1][3] * matrix[2][0] + matrix[0][3] * matrix[1][0] * matrix[2][1]) - (matrix[0][3] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][3] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][3]));
    int C33 = (matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][2]);

    // Ma trận phụ hợp
    float finmatrix[4][4] = {
        {C00, C10, C20, C30},
        {C01, C11, C21, C31},
        {C02, C12, C22, C32},
        {C03, C13, C23, C33}
    };

    float scalar = 1.0 / det;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            finmatrix[i][j] *= scalar;
        }
    }

    // In ma trận nghịch đảo
    printf("Invertible matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("\033[1;3m%.2f\033[0m\t", finmatrix[i][j]);  //"\033" là bắt đầu chuỗi điều khiển ANSI, 1m là in đậm, 3m là in nghiêng, 0m là bay màu.
        }
        printf("\n");
    }
}

// Hàm từ tinhmenh.c
void tinh_menh(int namSinh) {
    char Menh[5][100] = {"Kim", "Thuy", "Hoa", "Tho", "Moc"};
    int can = (namSinh - 184) % 60 % 10;
    if (can % 2 == 1) {
        can = (can + 1) / 2;
    } else {
        can = (can + 2) / 2;
    }

    int chi = ((namSinh - 184) % 60 % 12) + 1;
    if (chi <= 6) {
        if (chi % 2 == 1) {
            chi = (chi - 1) / 2;
        } else {
            chi = (chi - 2) / 2;
        }
    } else {
        if (chi % 2 == 1) {
            chi = (chi - 7) / 2;
        } else {
            chi = (chi - 8) / 2;
        }
    }

    int menh = can + chi;
    if (menh > 5) {
        menh = menh - 5;
    }

    printf("Ban thuoc menh %s\n", Menh[menh - 1]);
}
