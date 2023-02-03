#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b ,c;
    char longest_side;
    printf("Enter the side lengths of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c){
        longest_side='a';
    }else if (b>a && b>c){
        longest_side='b';
    }else{
        longest_side='c';
    }
    if (longest_side == 'a'){ 
        if (a*a == b*b+ c*c){
            printf("Dik açılı üçgen\n");
        }else if (a*a < b*b+c*c){
            printf("Dar açılı üçgen\n");
        }else if (a*a > b*b+c*c){
            printf("Geniş açılı üçgen\n");
        }else
            printf("Girilen kenarlar bir üçgen oluşturmaz\n");
    }else if (longest_side == 'b'){
        if (b*b == a*a + c*c){
            printf("Dik açılı üçgen\n");
        }else if (b*b < a*a + c*c){
            printf("Dar açılı üçgen\n");
        }else if (b*b > a*a + c*c){
            printf("Geniş açılı üçgen\n");
        }else
            printf("Girilen kenarlar bir üçgen oluşturmaz\n");
    }else{
        if (c*c == b*b + a*a){
            printf("Dik açılı üçgen\n");
        }else if (c*c < b*b + a*a){
            printf("Dar açılı üçgen\n");
        }else if (c*c > b*b + a*a){
            printf("Geniş açılı üçgen\n");
        }else
            printf("Girilen kenarlar bir üçgen oluşturmaz\n");
    }
    return 0;
}