#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=0,b=1,c=0;
    printf("%d\t",b);
    for (int i = 1; i < 20; i++){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    

    return 0;
}