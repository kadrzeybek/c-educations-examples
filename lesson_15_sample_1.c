#include <stdio.h>
#include <stdlib.h>  
//Kullanıcıdan alınan iki sayının değerini karşılaştıran program
int main(){
    int number1,number2;
    number1=0;
    number2=0;
    printf("Enter two number: ");
    scanf("%d %d", &number1, &number2);
    if (number1>number2){
        printf("Number1 is greater than number2 variable\n");
    }else if (number2>number1){
        printf("number2 is greater than number1 variables\n");
    }else{
        printf("number1 is equals number 2 variables\n");
    }
    return 0;
}