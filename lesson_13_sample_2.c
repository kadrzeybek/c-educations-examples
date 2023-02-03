#include <stdio.h>
#include <stdlib.h>

// 2- girilen dört sayının aritmatik ortalamasını bulan program

int main(){

    float a, b, c,d,avarage;

    printf("Dört adet sayı giriniz: ");
    scanf("%f%f%f%f", &a,&b,&c,&d);
    avarage=(a+b+c+d)/4;
    printf("Girdiğin sayıların ortalaması: %f",avarage);
    return 0;
}
