#include <stdio.h>
#include <stdlib.h>

/*Kapalı bir kaptaki gaz basıncını
hesaplayan program
basınç=(mol sayısı * R sabiti * sıcaklık) / hacim
s*/   

int main(){
    
    float pressure, constantR;
    int number_of_moles, volume,heat;
    constantR=0.82;
    
    printf("Kabin Hacmini giriniz:");
    scanf("%d", &volume);
    printf("Kaptaki Mol Sayısını Giriniz:");
    scanf("%d", &number_of_moles);
    printf("Ortam Sıcaklığını Giriniz:");
    scanf("%d", &heat);
    pressure=(number_of_moles*constantR*heat)/volume;
    printf("%d Hacimli Kaptaki Gazın Basıncı:%f\n\n\n",volume,pressure);
    
    return 0;
}