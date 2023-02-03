
#include<stdio.h>
#include<stdlib.h>
int main(){
/* dairenin çevresini bulan program
1- ihtiyacımız olan variables bul ve tanımla
2- variable type bul
3- formülü tanımla alan = pi*r*r çevre = 2*pi*r
4- kullanıcıdan verileri al
5- işlem yap
6- çıktı ver
*/

float r, circumference, area;
const float PI = 3.1415;
printf("Darirenin yarıçapını giriniz:");
scanf("%f",&r);
circumference = 2 * PI * r;
area = PI * r * r;
printf("Dairenin çevresi:%f\n", circumference);
printf("Dairenin Alanı:%f\n", area);
return 0;
}