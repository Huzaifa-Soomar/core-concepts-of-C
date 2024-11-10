#include<stdio.h>

int main(){
   char name [10];
   int age;
   float weight;

   printf("enter your name :");
   scanf("%s" , &name);

   printf("enter your age :");
   scanf("%d" , &age);
   
   printf("enter your weight :");
   scanf("%f" , &weight);
   
   printf("Hello %s your age is %d and your weight is %f" , name,age,weight);
   return 0;
}