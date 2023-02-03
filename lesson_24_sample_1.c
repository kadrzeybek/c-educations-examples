#include <stdio.h>
#include <stdlib.h>
/* 
Herhangi bir karakteri girdi olarak alan ve bu karakterin bir harf olup
olmadığını ve küçük harf mi büyük harf mi olduğunu bulan program
*/
int main(){
    char my_character;

    printf("Enter a character: ");
    scanf("%c", &my_character);

    if (my_character>='A' && my_character <= 'Z'){
        printf("%c is an uppercase letter\n", my_character);
    }else if (my_character>='a' && my_character <='z'){
        printf("%c is a lowercase letter\n", my_character);
    }else{
        printf("%c is not a letter\n", my_character);
    }
    return 0;
}