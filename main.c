#include "function.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int choice;
    printf("Welcome to Project Sekai!\n");
    printf("Choose an option:\n");
    printf("\033[3;1m1. Calculate Zodiac Sign and Personality[0m\n");
    printf("\033[3;1m2. Calculate Matrix Determinant[0m\n");
    printf("\033[3;1m3. Calculate Invertible Matrix[0m\n");
    printf("\033[3;1m4. Calculate Tinh Menh[0m\n");
    printf("\033[3;1m5. Calculate Vo Chong Compatibility[0m\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            //zodiac.c
            int day, month, year;
            char Surname[50], Middlename[50], Lastname[50];



            printf("Enter your Surname: ");
            fgets(Surname, sizeof(Surname), stdin);
            Surname[strcspn(Surname, "\n")] = '\0'; // Loại bỏ ký tự newline

            printf("Enter your Middle name: ");
            fgets(Middlename, sizeof(Middlename), stdin);
            Middlename[strcspn(Middlename, "\n")] = '\0';

            printf("Enter your Last name: ");
            fgets(Lastname, sizeof(Lastname), stdin);
            Lastname[strcspn(Lastname, "\n")] = '\0';

            printf("Enter your birthday (DD MM YYYY): ");
            scanf("%d %d %d", &day, &month, &year);

            printf("\nYour name is: %s %s %s\n", Surname, Middlename, Lastname);
            printf("Your birthday is: %02d/%02d/%04d\n", day, month, year);

            zodiac_sign(day, month, year); // Tính cung hoàng đạo
            personality(Lastname[0]); // Tính tính cách dựa trên họ
            break;
        }

        case 2: {
            //determinantmatrix.c
            int option;
            printf("Choose your matrix pattern:\n");
            printf("1. 2x2\n2. 3x3\n3. 4x4\n");
            scanf("%d", &option);

            if (option == 1) {
                int matrix[2][2];
                printf("Enter 4 numbers for 2x2 matrix:\n");
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        scanf("%d", &matrix[i][j]);
                    }
                }
                printf("Determinant: %d\n", determinant_2x2(matrix));
            } else if (option == 2) {
                int matrix[3][3];
                printf("Enter 9 numbers for 3x3 matrix:\n");
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        scanf("%d", &matrix[i][j]);
                    }
                }
                printf("Determinant: %d\n", determinant_3x3(matrix));
            } else if (option == 3) {
                int matrix[4][4];
                printf("Enter 16 numbers for 4x4 matrix:\n");
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        scanf("%d", &matrix[i][j]);
                    }
                }
                printf("Determinant: %d\n", determinant_4x4(matrix));
            } else {
                printf("Invalid choice.\n");
            }
            break;
        }

        case 3: {
            //invertiblematrix.c
            int option;
            printf("Choose your matrix pattern:\n");
            printf("1. 2x2\n2. 3x3\n3. 4x4\n");
            scanf("%d", &option);

            if (option == 1) {
                int matrix[2][2];
                printf("Enter 4 numbers for 2x2 matrix:\n");
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        scanf("%d", &matrix[i][j]);
                    }
                }
                invertible_2x2(matrix);
            } else if (option == 2) {
                int matrix[3][3];
                printf("Enter 9 numbers for 3x3 matrix:\n");
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        scanf("%d", &matrix[i][j]);
                    }
                }
                invertible_3x3(matrix);
            } else if (option == 3) {
                int matrix[4][4];
                printf("Enter 16 numbers for 4x4 matrix:\n");
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        scanf("%d", &matrix[i][j]);
                    }
                }
                invertible_4x4(matrix);
            } else {
                printf("Invalid choice.\n");
            }
            break;
        }

        case 4: {
            //tinhmenh.c
            int namSinh;
            printf("Nhap nam sinh cua ban: ");
            scanf("%d", &namSinh);
            tinh_menh(namSinh);
            break;
        }

        case 5: {
            //vochong.c
            int namSinhChong, namSinhVo;
            printf("Nhap nam sinh chong: ");
            scanf("%d", &namSinhChong);
            printf("Nhap nam sinh vo: ");
            scanf("%d", &namSinhVo);

            int menhChong = TongNam(namSinhChong) % 9;
            int menhVo = TongNam(namSinhVo) % 9;
            if (menhChong == 0) menhChong = 9;
            if (menhVo == 0) menhVo = 9;

            int soChong[10] = {0, 2, 6, 3, 8, 1, 7, 5, 4, 7};
            int soVo[10] = {0, 3, 1, 8, 3, 6, 2, 7, 4, 5};

            int n = soChong[menhChong] + soVo[menhVo];

            if (soChong[menhChong] == soVo[menhVo]) {
                printf("Menh vo chong la Phuc Vi\n");
            } else if (n == 3) {
                printf("Menh vo chong la Luc Sat\n");
            } else if (n == 4) {
                printf("Menh vo chong la Thien Y\n");
            } else if (n == 5) {
                printf("Menh vo chong la Ngu Quy\n");
            } else if (n == 6) {
                if (soChong[menhChong] == 1 || soVo[menhVo] == 1) {
                    printf("Menh vo chong la Hoa Hai\n");
                } else {
                    printf("Menh vo chong la Thien Y\n");
                }
            } else if (n == 7) {
                if (soChong[menhChong] == 4 && soVo[menhVo] == 3) {
                    printf("Menh vo chong la Ngu Quy\n");
                } else if (soChong[menhChong] == 1 || soVo[menhVo] == 1) {
                    printf("Menh vo chong la Tuyet Menh\n");
                } else if (soChong[menhChong] == 3 || soVo[menhVo] == 4) {
                    printf("Menh vo chong la Luc Sat\n");
                } else {
                    printf("Menh vo chong la Sinh Khi\n");
                }
            } else if (n == 8) {
                if (soChong[menhChong] == 5 || soVo[menhVo] == 5) {
                    printf("Menh vo chong la Tuyet Menh\n");
                } else {
                    printf("Menh vo chong la Dien Nien\n");
                }
            } else if (n == 9) {
                if (soChong[menhChong] == 8 || soVo[menhVo] == 8) {
                    printf("Menh vo chong la Ngu Quy\n");
                } else if (soChong[menhChong] == 7 || soVo[menhVo] == 7) {
                    printf("Menh vo chong la Tuyet Menh\n");
                } else if (soChong[menhChong] == 6 || soVo[menhVo] == 6) {
                    printf("Menh vo chong la Hoa Hai\n");
                } else {
                    printf("Menh vo chong la Dien Nien\n");
                }
            } else if (n == 10) {
                if (soChong[menhChong] == 8 || soVo[menhVo] == 8) {
                    printf("Menh vo chong la Hoa Hai\n");
                } else {
                    printf("Menh vo chong la Sinh Khi\n");
                }
            } else if (n == 11) {
                if (soChong[menhChong] == 8 || soVo[menhVo] == 8) {
                    printf("Menh vo chong la Dien Nien\n");
                } else if (soChong[menhChong] == 7 || soVo[menhVo] == 7) {
                    printf("Menh vo chong la Hoa Hai\n");
                } else {
                    printf("Menh vo chong la Thien Y\n");
                }
            } else if (n == 12) {
                if (soChong[menhChong] == 8 || soVo[menhVo] == 8) {
                    printf("Menh vo chong la Tuyet Menh\n");
                } else {
                    printf("Menh vo chong la Ngu Quy\n");
                }
            } else if (n == 13) {
                printf("Menh vo chong la Luc Sat\n");
            } else if (n == 14) {
                printf("Menh vo chong la Ngu Quy\n");
            } else if (n == 15) {
                printf("Menh vo chong la Thien Y\n");
            }
            break;
        }

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
