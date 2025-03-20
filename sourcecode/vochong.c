#include <stdio.h>

int TongNam(int namSinh)
{
    int sum = 0;
    do
    {
        sum = sum + namSinh % 10;
        namSinh /= 10;
    } while (namSinh > 0);
    return sum;
}

int main(void)
{
    int namSinh[2];
    printf("Nhap nam sinh chong: ");
    scanf("%d", &namSinh[0]);
    printf("Nhap nam sinh vo: ");
    scanf("%d", &namSinh[1]);
    int menhChong = TongNam(namSinh[0]) % 9;
    int menhVo = TongNam(namSinh[1]) % 9;
    if (menhChong == 0)
    {
        menhChong = 9;
    }
    if (menhVo == 0)
    {
        menhVo = 9;
    }

    int soChong[10] = {0, 2, 6, 3, 8, 1, 7, 5, 4, 7};
    int soVo[10] = {0, 3, 1, 8, 3, 6, 2, 7, 4, 5};

    printf("%d,%d\n", soChong[menhChong], soVo[menhVo]);

    int n=soChong[menhChong] + soVo[menhVo];

    if (soChong[menhChong] == soVo[menhVo])
    {
        printf("Menh vo chong la Phuc Vi");
    }
    else if (n == 3)
    {
        printf("Menh vo chong la Luc Sat");
    }
    else if (n == 4)
    {
        printf("Menh vo chong la Thien Y");
    }
    else if (n == 5)
    {
        printf("Menh vo chong la Ngu Quy");
    }
    else if (n == 6)
    {
        if (soChong[menhChong] == 1 || soVo[menhVo]==1)
        {
            printf("Menh vo chong la Hoa Hai");
        }
        else
        {
            printf("Menh vo chong la Thien Y");
        }
    }
    else if (n == 7)
    {
        if (soChong[menhChong] == 4 && soVo[menhVo]==3)
        {
            printf("Menh vo chong la Ngu Quy");
        }
        else if (soChong[menhChong] == 1 || soVo[menhVo]==1)
        {
            printf("Menh vo chong la Tuyet Menh");
        }
        else if (soChong[menhChong] == 3 || soVo[menhVo]==4)
        {
            printf("Menh vo chong la Luc Sat");
        }
        else
        {
            printf("Menh vo chong la Sinh Khi");
        }
    }
    else if (n == 8)
    {
        if (soChong[menhChong] == 5 || soVo[menhVo]==5)
        {
            printf("Menh vo chong la Tuyet Menh");
        }
        else
        {
            printf("Menh vo chong la Dien Nien");
        }
    }
    else if (n == 9)
    {
        if (soChong[menhChong] == 8 || soVo[menhVo]==8)
        {
            printf("Menh vo chong la Ngu Quy");
        }
        else if (soChong[menhChong] == 7 || soVo[menhVo]==7)
        {
            printf("Menh vo chong la Tuyet Menh");
        }
        else if (soChong[menhChong] == 6 || soVo[menhVo]==6)
        {
            printf("Menh vo chong la Hoa Hai");
        }
        else
        {
            printf("Menh vo chong la Dien Nien");
        }
    }
    else if (n == 10)
    {
        if (soChong[menhChong] == 8 || soVo[menhVo]==8)
        {
            printf("Menh vo chong la Hoa Hai");
        }
        else
        {
            printf("Menh vo chong la Sinh Khi");
        }
    }
    else if (n == 11)
    {
        if (soChong[menhChong] == 8 || soVo[menhVo]==8)
        {
            printf("Menh vo chong la Dien Nien");
        }
        else if (soChong[menhChong] == 7 || soVo[menhVo]==7)
        {
            printf("Menh vo chong la Hoa Hai");
        }
        else
        {
            printf("Menh vo chong la Thien Y");
        }
    }
    else if (n == 12)
    {
        if (soChong[menhChong] == 8 || soVo[menhVo]==8)
        {
            printf("Menh vo chong la Tuyet Menh");
        }
        else
        {
            printf("Menh vo chong la Ngu Quy");
        }
    }
    else if (n == 13)
    {
        printf("Menh vo chong la Luc Sat");
    }
    else if (n == 14)
    {
        printf("Menh vo chong la Ngu Quy");
    }
    else if (n == 15)
    {
        printf("Menh vo chong la Thien Y");
    }
    
    return 0;
}