#include <stdio.h>
#include <stdlib.h>  
//mecliste yeterli milletvekili saısı var mı yok mu konrtol eden program
int main(){
    int part_A,part_B,part_C,current_councilor;
    const int sum_councilor= 600;

    printf(" Meclisteki partilerin milletvekili sayılarını giriniz: ");
    scanf("%d%d%d", &part_A,&part_B,&part_C);

    current_councilor=part_A+part_B+part_C;
    if (current_councilor<200){
        printf("Yeterli kişi sayısı bulunamadığından ");
        printf("toplantıya ara verildi.\n");
        printf("Toplandtı yeterli kişi sayısı 200'dür.\n");

    }else
    printf("Meclis toplantıya hazır.\n");
    return 0;
}