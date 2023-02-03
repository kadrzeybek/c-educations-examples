#include <stdio.h>
#include <stdlib.h>

int main(){

    int my_number, my_number2;
    printf("Enter two Number:\n");
    scanf("%d %d", &my_number, &my_number2);
    printf("The numbers you entered are %d %d", my_number, &my_number2);
    return 0;

}