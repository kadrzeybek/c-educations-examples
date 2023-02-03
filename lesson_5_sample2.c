#include <stdio.h>
#include <stdlib.h>

int main(){

    /* 4 adet sayı alıp bunların karesini ve küpünü alan program
    1- ihtiyacımız olan variables bul ve tanımla 
    2- variables type bul
    3- formülü tanımla 
    4- kullanıcıdan verileri al
    5- işlem 
    6- çıktı ver
    */
    float number1, kare, kup;
    printf("Karesini ve küpünü istediğin sayıyı gir:");
    scanf("%f", &number1);
    printf("verdiğiniz değer:%f\n", number1);
    kare = number1 * number1;
    kup = number1 * number1 * number1;
    printf("Verdiğiniz Değerin Karesi:%f\n", kare);
    printf("Verdiğiniz Değerin Küpü:%f\n", kup);
    return 0;
}