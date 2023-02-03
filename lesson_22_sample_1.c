#include <stdio.h>
#include <stdlib.h>
/*
Bir gsm operatörü 4 dk kadar konuşma ücretini 0.30 TL olarak belirlemiştir.
Ancak konuşma süresi 4 dakikayı aşarsa bundan sonraki her dakika için ek olarak
0.07 TL almaktadır. Telefon görüşmesinin süresini dakika cinsinden
gridi olarak alan ve konuşmanın ücretini hesaplayan program
*/
int main(){
    float talk_time, fee;

    printf("Phone talk time: ");
    scanf("%f", &talk_time);

    if (talk_time <=4.0){
        fee = 1;
    }else{
        fee = 1+(talk_time-4)*0.07;
    }
    printf("Fee: %.3f TL\n",fee);
    return 0;
}