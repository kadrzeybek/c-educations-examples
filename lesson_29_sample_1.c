#include <stdio.h>
#include <stdlib.h>

int main(){
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel.\n",letter);
        break;
    default:
        printf("%c is a consonant.\n",letter);
        break;
    }
    return 0;
}