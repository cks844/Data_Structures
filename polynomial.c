#include<stdio.h>
struct polynomial
{
    int exp;
    float coeff;
}poly[20];

int main()
{
    int n,i,k=0;
    printf("Enter the degree of the polynomial : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("Enter the coefficient of x^%d : ",i);
        scanf("%f",&poly[i].coeff);
        poly[i].exp=i;
    }
    printf("The polynomial is ");
    for(i=n;i>0;i--)
    {
        printf(" %.1fx^%d +",poly[i].coeff,poly[i].exp);
    }
    printf(" %.1fx^%d ",poly[0].coeff,poly[0].exp);
}
