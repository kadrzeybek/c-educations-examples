#include <stdio.h>
#include <stdlib.h>
/*
Asan sayıları bulan program
*/
int main(){
    int number,counter,a;
    counter=0;
    
    printf ("Enter a positive number:");
    scanf ("%d", &number);
    for (int i = 1; i <=number; i++){
        for (int j = 1; j<=i/2; j++){
            a=i%j;
            while(a==0)
            {
                counter++;
                a++;
            }
        }
        while (counter==1)
        {
            printf("%d\n",i);
            counter=0;
        }
        counter=0;
    }
    

    return 0;
}