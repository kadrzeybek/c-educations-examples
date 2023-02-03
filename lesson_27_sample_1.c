#include <stdio.h>
#include <stdlib.h>

int main(){
    float number1, number2;
    char my_operator;

    printf("Choose operator(+,-,*,/): ");
    scanf("%c",&my_operator);

    printf("Enter two numbers:");
    scanf("%f%f", &number1, &number2);

    printf("\noperators=%c\nnumber1=%f\nnumber2=%f\n",my_operator,number1,number2);

    switch (my_operator)
    {
    case '/':
        printf("%.2f\n",(number1/number2));
        break;
    case '*':
        printf("%.2f\n",(number1*number2));
        break;
    case '-':
        printf("%.2f\n",(number1-number2));
        break;
    case '+':
        printf("%.2f\n",(number1+number2));
        break;
    default:
        printf("You entered the wrong operatorator\n");
    }
    return 0;
}