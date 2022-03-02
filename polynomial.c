#include<stdio.h>
struct polynomial{
    int coefficient;
    int exponent;
};          


struct polynomial a[50],b[50];

int main(){
   int degree1,degree2;
   int i, k=0;

   printf("Enter the highest degree of polynomial: ");
   scanf("%d",&degree1);        
   
   printf("\nEnter Polynomial\n");
   for(i=0; i <= degree1; i++){   
       printf("\nEnter the exponent: ");
       scanf("%d", &a[i].exponent); 
       printf("\nEnter it's coefficient: ");
       scanf("%d", &a[i].coefficient); 
   }
   printf("\nExpression = %dx^%d", a[0].coefficient, a[0].exponent);
   for(i=1; i <= degree1; i++){
       printf(" + %dx^%d", a[i].coefficient, a[i].exponent);
   }        
printf("\n");
return 0;
}
