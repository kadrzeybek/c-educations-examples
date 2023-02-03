
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kullanıcıdan 4 basamaklı bir sayı alıp bu sayının
    rakamlarını toplayan program*/
    int my_number, bolum, kalan, sum;
    sum=0;

    printf("4 Basamaklı bir değer giriniz:");
    scanf("%d",&my_number);
    bolum=my_number/1000;
    sum+=bolum;
    kalan=my_number%1000;
    bolum=kalan/100;
    kalan%=100;
    sum+=bolum;
    bolum=kalan/10;
    kalan%=10;
    sum+=kalan+bolum;

    printf("Girdğiniz Değer%d\n",my_number);
    printf("Girdiğiniz Değerin Rakamları Toplamı:%d\n",sum);
    return 0;
}