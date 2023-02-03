#include <stdio.h>
#include <stdlib.h>

int main(){

    int sharp=0;

    printf("Enter a sharp number: ");
    scanf("%d", &sharp);
    for (int i = 0; i <=sharp; i++)
    {
        for (int j = 0; j <i ; j++)
        {
            printf("*");    
        }
        
        printf("\n");
    }
    for (int i = sharp; i >=0; i--)
    {
        for (int j = i; j >0 ; j--)
        {
            printf("*");    
        }
        
        printf("\n");
    }

    return 0;
}