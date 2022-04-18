#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void yildizBas(int *adet) {
    printf("%d",*adet);

}

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;
    //printf("Kac adet yildiz bastirmak istiyorsunuz?\n");
    //scanf("%d",&sayi);
    //yildizBas(&sayi);


    // ORNERK2
    int x,y = 0;
    int *a1,*a2 = &y;
    a1 = a2;
    x = ++(*a2);
    *a2 = *a1 + x;
    printf("%d %d %d %d",x,y,*a1,*a2);





    return 0;
}
