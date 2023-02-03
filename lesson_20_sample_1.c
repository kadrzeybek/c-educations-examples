#include <stdio.h>
#include <stdlib.h>
/*
Girilen 4 basamaklı sayının özel sayı olup olmadığını 
tespit eden program
*/
int main(){
    int number,new_number,part1,part2;
    printf("Enter a positive number: ");
    scanf("%d", &number);

    part1= number/100;
    part2= number%100;
    new_number=(part1+part2)*(part1+part2);
    if (new_number== number){
        printf("%d aradığnuz özel sayı.",number);
    }else{
        printf("%d özel sayı değil",number);
    }
    return 0;
}