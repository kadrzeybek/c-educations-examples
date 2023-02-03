#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y;
    x=4;
    y=2;
    printf("result: %d\n",x>5 && x<y);
    printf("result: %d\n",x<5 || x<y);
    printf("result: %d\n",!(x>5 && x<10));
    
    return 0;
}
