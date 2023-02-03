#include <stdio.h>
#include <stdlib.h>
int main(){
    int i ;
    i=1;
    float exam_grade,sumgrade;
    exam_grade=0.0;
    sumgrade=0.0;
    do
    {
        
        printf("%dth exam grade: ",i);
        scanf("%f", &exam_grade);
        if (exam_grade==0){
            printf("See you!\n");
            break;
        }else if (exam_grade<0)
        {
            printf("Are you kidding me?\n");
        }
        sumgrade+=exam_grade;
        i++;
        
        
    } while (exam_grade!=0);
    if (sumgrade==0)
    {
        printf("You did not enter the any number\n");
    }else
        printf("Avarage of exams: %.2f\n",sumgrade/(i-1));
    return 0;
}