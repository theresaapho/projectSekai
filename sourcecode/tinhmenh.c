#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];
    int namSinh;
    int can;
    int chi;
    char Menh[5][100] = {"Kim", "Thuy", "Hoa", "Tho", "Moc"};

    printf("Nhap nam sinh cua ban: ");
    scanf("%d", &namSinh);
    can = (namSinh - 184) % 60 % 10;
    if (can % 2 == 1)
    {
        can = (can + 1) / 2;
    }
    else
    {
        can = (can + 2) / 2;
    }

    chi = ((namSinh - 184) % 60 % 12) + 1;
    if (chi <= 6)
    {
        if (chi % 2 == 1)
        {
            chi = (chi - 1) / 2;
        }
        else
        {
            chi = (chi - 2) / 2;
        }
    }
    else
    {
        if (chi % 2 == 1)
        {
            chi = (chi - 7) / 2;
        }
        else
        {
            chi = (chi - 8) / 2;
        }
    }

    int menh = can + chi;
    if (menh > 5)
    {
        menh = menh - 5;
    }

    printf("Ban thuoc menh %s", Menh[menh - 1]);
    return 0;
}