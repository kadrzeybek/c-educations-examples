#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number%2)
    {
    case 0:
        printf("%d is even number.\n",number);
        break;
    case 1:
        printf("%d is odd number.\n", number);
        break;
    }
    return 0;
}