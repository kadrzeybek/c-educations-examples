#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
girilen sayının kerkökünün bir tam sayı olup olmadığını bulan program
*/
int main(){
    int number, square_root;
    printf("Enter a positive number: ");
    scanf("%d", &number);
    if (number < 0){
        printf("Please do not do this\n");
    }else{
        square_root= sqrt(number);
        if (square_root * square_root==number){
            printf("Square root of %d is an integer\n", number);
        }else{
            printf("No it is not\n");
        }
    }
    return 0;
}