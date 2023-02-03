#include <stdio.h>
#include <stdlib.h>

int main(){
    int day, number_of_products;
    char *day_name;
    number_of_products=0;
    day=0;

    printf("Enter a number of day (1 to 7):");
    scanf("%d", &day);
    switch (day)
    {
    default:
        printf("Please enter a number 1 to 7");
    case 7:number_of_products+=25;
        if(day==7){day_name="Sunday";}
    case 6:number_of_products+=19;
        if(day==6){day_name="Saturday";}
    case 5:number_of_products+=15;
        if(day==5){day_name="Friday";}
    case 4:number_of_products+=10;
        if(day==4){day_name="Thursday";}
    case 3:number_of_products+=7;
        if(day==3){day_name="Wednesday";}
    case 2:number_of_products+=5;
        if(day==2){day_name="Tuesday";}
    case 1:number_of_products+=2;
        if(day==1){day_name="Monday";}
        break;
    }
    printf("%s gününe kadar %d ürün satışı yapıldı.\n", day_name, number_of_products);
    return 0;
}