#include <stdio.h>
#include <stdlib.h>

int main(){
    double wheat=1;
    double sum_wheat=0;
    for (int i = 1; i <=64; i++)
    {
        printf("%d.kare için bilgine verilecek buğday sayıdı: %20.0f\n",i ,wheat);
        sum_wheat+=wheat;
        wheat*=2;
    }
    

    return 0;
}