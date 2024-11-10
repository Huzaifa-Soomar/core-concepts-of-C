#include<stdio.h>

int main(){
    char item1 [10];
    int price1;
      
    char item2 [10];
    int price2;

    char item3 [10];
    int price3;


    printf("Enter the name of item 1 : ");
    scanf("%s,", &item1);
    printf("Enter the price  of item 1 : ");
    scanf("%d" , &price1);

    printf("Enter the name of item 2 : ");
    scanf("%s,", &item2);
    printf("Enter the price  of item 2 : ");
    scanf("%d" , &price2);
   

    printf("Enter the name of item 3 : ");
    scanf("%s,", &item3);
    printf("Enter the price  of item 3 : ");
    scanf("%d" , &price3);


    printf("Shipping List \n");
    printf("1.  %s : $%.d\n" ,item1,price1);
    printf("2.  %s : $%.d\n" ,item2,price2);
    printf("3.  %s : $%.d\n" ,item3,price3);


    
       

    return 0;


}