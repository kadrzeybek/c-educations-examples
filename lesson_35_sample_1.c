#include <stdio.h>
#include <stdlib.h>
/*
Asan sayıları bulan program
*/
int main(){
    int number,i;
    number=0;
    i=2;
    printf ("Enter a positive number:");
    scanf ("%d", &number) ;
    if (number<2)
    {
        printf("Please don't do this\n");
        return 0;
    }
    while (i<=number/2) {
        if (number%i == 0) {
            printf ("%d divided by %d so it can't be a prime number\n",number, i) ;
            return 0;
        }
        i++;
    }
    printf("%d is a prime number\n",number) ;
    return 0;
}