#include <stdio.h>
#include <stdlib.h>  
//basit bir kitap siparişi ve indirim oranı
int main(){
    int book_price,order_quantity;
    float discount_rate, no_discount_price,discount_price,sum;
    book_price=20;
    order_quantity=0;

    printf("How many book do you want to order: ");
    scanf("%d",&order_quantity);
    if(order_quantity>=60){
        discount_rate=0.30;
    }else{
        if (order_quantity>=30 && order_quantity <60){
            discount_rate=0.20;
        }else if (order_quantity>=10 && order_quantity<30){
            discount_rate=0.12;
        }else{
            discount_rate=0.01;
        }
    }
    no_discount_price=order_quantity*book_price;
    printf("no discount price of book :%f TL\n",no_discount_price);
    discount_price=order_quantity*book_price*discount_rate;
    printf("amount of discount: %f TL\n",discount_price);
    sum = no_discount_price-discount_price;
    printf("sum of the order price: %f TL\n",sum);
    return 0;
}