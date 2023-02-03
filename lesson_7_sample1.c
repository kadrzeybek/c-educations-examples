#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,z;
    x=5;
    y=2;
    z=9;
    x++;
    //x=6
    ++y;//y=3
    z--;
    //z=8
    x=y++;
    //x=3 y=4
    x=++y;//x=5 y=5
    z=y--;
    //z=5 y=4
    z=--y;//z=3 y=3
    printf("x: %d\n",x);
    printf("y: %d\n",y);
    printf("z: %d\n",y);

    //x=5
    //y=3
    //z=3
    return 0;
}