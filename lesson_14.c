#include <stdio.h>
#include <stdlib.h>  
//Girilen notun geçer not mu olduğuna karar veren program
int main(){
    int score;
    printf("Enter a score: ");
    scanf("%d", &score);
    if (score>=60){
        printf("Congrations! You passed the exam.\n");
        printf("Your score is %d", score);
    }else
        printf("Unfortunately You did not pass the exam\n");
    printf("The program continous to run\n\n");
    return 0;
}