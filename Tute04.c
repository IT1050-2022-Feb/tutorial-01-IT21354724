/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int max(int no1,int no2);
int min(int no1,int no2);
int multiply(int no1,int no2);
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("The min is:%d\n",min(no1, no2));
   printf("The max is:%d\n",max(no1, no2));
   printf("The multiply is:%d",multiply(no1, no2));
   return 0;
}
 int max(int no1,int no2){
   if(no1>no2)
   return no1;
   else   
     return no2;
 }
int min(int no1,int no2){
    if(no1>no2)
   return no2;
   else   
     return no1;
     }
int multiply(int no1,int no2){
  return(no1*no2);
}