step 1: biên dịch chương trình bằng cách gõ dòng bash vào Terminal.

      gcc main.c function.c -o program
      
step 2: chạy chương trình

      ./program

function.c: viết code thực thi các hàm

function.h: chứa khai bao các hàm (#ifndef, #define, và #endif là các directive để tránh việc include nhiều lần cùng một file header)

main.c: dùng để gọi các hàm đã định nghĩa trong function.c, và print
