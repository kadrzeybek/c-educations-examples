#include <stdio.h>
#include <stdlib.h>

// 1- girilen sayının onlar ve birler basamağını bulan program
int main(){

    int my_number, first, second;

    printf("Pozitif bir sayı giriniz: ");
    scanf("%d", &my_number);
    first=my_number%10;
    second=(my_number%100)/10;
    printf("Girdiğin sayının birler basamağı: %d",first);
    printf("Girdiğin sayının onlar basamağı: %d",second);
    first=my_number%10;
    return 0;
}
