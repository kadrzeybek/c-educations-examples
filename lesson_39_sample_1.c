#include <stdio.h>
#include <stdlib.h>
int main(){
    int number,fac=1;

    printf("Enter a positive number: ");
    scanf("%d",&number);
    if (number==0){
        printf("You sohuld not enter zero\n");
    }else if (number>0)
    {
        for (int i = 1; i <= number; i++){
        fac*=i;
    }printf("%d factorial is %d\n",number,fac);
    
    }else{
        printf("Entered number is not positive\n");
    }
    return 0;
}