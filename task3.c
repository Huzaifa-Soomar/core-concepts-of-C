#include<stdio.h>

int main(){
    int sub1 ;
    int sub2 ;
    int sub3 ;

    float avg;
    
    printf("Enter subject 1 makrks :  ");
    scanf("%d" , &sub1);

    printf("Enter subject 2 makrks :  ");
    scanf("%d" , &sub2);

    printf("Enter subject 3 makrks :  ");
    scanf("%d" , &sub3);

    avg = (sub1 + sub2 +sub3)/3;

    printf("Your Avg Marks is : %f" , avg);

    

    return 0 ;
}