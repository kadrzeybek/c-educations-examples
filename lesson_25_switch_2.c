#include <stdio.h>
#include <stdlib.h>

// x==7 ? 19: (y==12 ? 10:-90);

int main(){
    int x,y,z;
    x=3;
    y=13;
    switch (x){
    case 7:z=19;break;
    default:switch (y){
        case 12:z=10;break;
        default:z=-90;break;
        }
    }
    printf("%d\n",z);
    return 0;
}
