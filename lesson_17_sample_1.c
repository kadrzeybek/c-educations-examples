#include <stdio.h>
#include <stdlib.h>
//Gİrilen değerin tek mi çift mi olduğunu bulan program
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number%2== 0){
        printf("%d is an even number\n",number);
    }else{
        printf("%d is an odd number\n", number);
    }
    return 0;
}