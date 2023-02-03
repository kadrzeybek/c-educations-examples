#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,div,sum,sub,multi,mod,my_number;
    x=6;
    y=4;
    sum=x+y;
    sub=x-y;
    multi=x*y;
    div=x/y;
    mod=x%y;
    my_number=5;
    printf("Sum:  %d\n",sum);
    printf("Substraction:  %d\n",sub);
    printf("Mutiplication:  %d\n",multi);
    printf("Division:  %d\n",div);
    printf("Mod:  %d\n",mod);
    printf("MY number:  %d\n",my_number);
    printf("MY number ++ sağda:  %d\n",my_number++);
    printf("MY number yeni değeri:  %d\n",my_number);
    printf("MY number ++ solda:  %d\n",++my_number);
    printf("MY number ikinci yeni değeri:  %d\n",my_number);
    return 0;
}