#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    for (i=0;i<10;i++){
        if(i==7){
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}