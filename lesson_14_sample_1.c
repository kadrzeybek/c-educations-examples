#include <stdio.h>
#include <stdlib.h>  
//Girirlen değerlerin pozitif mi negatif mi olduğunu veren program
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number>0){
        printf(" The value of number is positive.\n");
    }else if (number<0){
        printf("The value of number is negative\n ");
    }else
    printf("The value of number is zero\n");
    return 0;
}