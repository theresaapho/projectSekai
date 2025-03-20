#ifndef FUNCTION_H
#define FUNCTION_H

// Khai báo các hàm từ vochong.c
int TongNam(int namSinh);

// Khai báo các hàm từ zodiac.c
void zodiac_sign(int day, int month, int year);
void personality(char lastname);

// Khai báo các hàm từ determinantmatrix.c
int determinant_2x2(int matrix[2][2]);
int determinant_3x3(int matrix[3][3]);
int determinant_4x4(int matrix[4][4]);

// Khai báo các hàm từ invertiblematrix.c
void invertible_2x2(int matrix[2][2]);
void invertible_3x3(int matrix[3][3]);
void invertible_4x4(int matrix[4][4]);

// Khai báo các hàm từ tinhmenh.c
void tinh_menh(int namSinh);

#endif // FUNCTION_H