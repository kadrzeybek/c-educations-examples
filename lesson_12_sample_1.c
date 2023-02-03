#include <stdio.h>
#include <stdlib.h>


/*
    Bir elektrik dağıtım şirketi verdikleri
    hizmet karşılığında müsterilerinden aylık 
    olarak harcanan toplam kilowatt saat miktarınca
    ve birim  kilowatt saat ücreti ve abonelik ücreti
    her ay aylık enflasyon oranında artmaktadır.
    Buna göre müsterinin bir aya ait ödeyeceği
    elektrik faturalasının miktarını hesaplayan program
    Fatura Miktarı = Harcanan eketrik * Birim Fiyat + Abone ücreti
*/
int main(){
    float odenecek_fatura, eski_birim_fiyat, yeni_birim_fiyat;
    float enflasyon, eski_abone_ucreti,yeni_abone_ucreti;
    int yeni_okuma,eski_okuma,toplam_harcanan_elektrik;

    printf("Enflasyon oranını Giriniz: ");
    scanf("%f", &enflasyon);
    printf("önceki aya ait birim fiyat miktarını Giriniz: ");
    scanf("%f", &eski_birim_fiyat);
    printf("Önceki aya ait abonelik ücretini Giriniz: ");
    scanf("%f", &eski_abone_ucreti);
    printf("Bir önceki aya ait okuma değerini Giriniz: ");
    scanf("%d", &eski_okuma);
    printf("Bu aya ait okuma değerini Giriniz: ");
    scanf("%d", &yeni_okuma);
    toplam_harcanan_elektrik=yeni_okuma-eski_okuma;
    yeni_birim_fiyat=eski_birim_fiyat*(1+enflasyon/100);
    yeni_abone_ucreti=eski_abone_ucreti*(1+enflasyon/100);
    odenecek_fatura=toplam_harcanan_elektrik*yeni_birim_fiyat+yeni_abone_ucreti;
    printf("\nödeyeceğiniz fatura tutarı: %f\n\n",odenecek_fatura);
    return 0;
}