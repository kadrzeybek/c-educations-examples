#include <stdio.h>
#include <stdlib.h>
//Gİrilen değerin tek mi çift mi olduğunu bulan program
int main(){
    int number1,number2,number3,max, min;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &number1, &number2,&number3);

    if (number1>number2 && number1>number3){
        max=number1;
    }else if(number2>number1 && number2>number3){
        max=number2;
    }else{
        max=number3;
    }
    if (number1<number2 && number1<number3){
        min=number1;
    }else if(number2<number1 && number2<number3){
        min=number2;
    }else{
        min=number3;
    }
    printf("the largest number is %d\n", max);
    printf("The least number is %d\n", min);
    return 0;
}