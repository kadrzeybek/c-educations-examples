#include <stdio.h>
#include <stdlib.h>
/* 
Bir üçgenin açılarını girdi oarak alan ve bu üçgenin eş kenar,
ikiz kenar veya çeşit kenar üçgen olup olmadığını belirleyen programı yazalım
*/
int main(){
    int angle1, angle2, angle3;

    printf("Enter three angles: ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    if (angle1+angle2+angle3!=180){
        printf("The angles do not form triangles\n");
    }else{
        if(angle1==60 && angle2==60 && angle3==60){
        printf("This is an equilateral triangle\n");
    }else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3){
        printf("This is a isosceles triangle\n");
    }else{
        printf("This is a scalene triangle\n");
    }
    }

    return 0;
}