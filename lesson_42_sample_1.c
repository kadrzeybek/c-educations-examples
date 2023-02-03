#include <stdio.h>
#include <stdlib.h>

int main(){
    int number,max=0,min=0;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&number);
        if (number==0){
            break;
        }else{
            if (max<number)
            {
                max=number;
            }

            else if (min>number)
            {
                min=number;
            }
        }
    } while ((number!=0));
    
    printf("Max number is %d\n",max);
    printf("Min number is %d\n",min);

    return 0;
}