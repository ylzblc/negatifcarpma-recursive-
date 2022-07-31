#include <stdio.h>
#include <stdlib.h>

int carpma(int x, int y)
{
    if(x == 0 || y == 0)
        return 0;
    else(y<0);
        return (-x) + carpma(x, (y+1));
    return x + carpma(x, (y-1));

}

int main(void)
{
    int sayi_1, sayi_2;

    printf("Bir veya ikisi negatif olan iki sayi giriniz: ");
    scanf("%d%d", &sayi_1, &sayi_2);

    printf("Sonuc = %d", carpma(sayi_1, sayi_2));

    return 0;
}
