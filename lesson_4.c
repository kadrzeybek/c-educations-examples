#include <stdio.h>
#include <stdlib.h>

int main()
{
    int my_number, my_number2, my_number3, my_sum, my_extraction, my_multiplication;
    float my_division;
    my_number = 5;
    my_number2 = 11;
    my_number3 = 7;
    my_sum = my_number + my_number2 + my_number3;
    my_extraction = my_number2 - my_number;
    my_multiplication = my_number2 * my_number;
    my_division = my_number2 / my_number;
    printf("my_number: %d\n", my_number);
    printf("my_number2: %d\n", my_number2);
    printf("my_number3: %d\n", my_number3);
    printf("toplama: %d\n", my_sum);
    printf("Çıkarma: %d\n", my_extraction);
    printf("Çarpma: %d\n", my_multiplication);
    printf("Bölme: %f\n", my_division);

    return 0;
}