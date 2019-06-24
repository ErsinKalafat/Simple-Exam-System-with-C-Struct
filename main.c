#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenciler
{
    char ad[20];
    int numara;
    char cevaplari[5];
    int puan;
} ogr[2] =
{
    {"ahmet",10,"abcde",0},
    {"ersin",20,"acbed",0}
};
int main()
{
    char cevapAnahtari[5];
    printf("Cevap Anahtarini Giriniz : ");
    scanf("%s",&cevapAnahtari);

    int i=0;
    while (i<2)
    {
        printf("%d. ogrencinin ismi : %s, numarasi : %d \n",i+1,ogr[i].ad,ogr[i].numara);
        printf("Ogrencinin cevaplarini giriniz : ");
        scanf("%s",&ogr[i].cevaplari);
        i++;
    }

    printf("\n  SINAV SONUCLARI\n");
    printf("-------------------\n");

    int j,m;

    for (m=0; m<2; m++)
    {
        int dogru = 0;
        for (j=0; j<5; j++)
        {
            if (ogr[m].cevaplari[j] == cevapAnahtari[j])
                dogru++;
        }
        ogr[m].puan=dogru*20;
    }


    int k;
    for (k=0; k<2; k++)
    {
        printf("%s'in puani : %d\n",ogr[k].ad,ogr[k].puan);
    }


    return 0;
}
