#include<stdio.h>
struct sparse{
int row;
int column;
int value;
};
int main()
{
int r,c,i,j,k=0;
printf("\n Enter the size of row&column:");
scanf("%d %d",&r,&c);
int mat[r][c];
printf("Enter the elements of the matrix:");
struct sparse sp[20];
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&mat[i][j]);
        if(mat[i][j]!=0)
        {
            sp[k].row=i;
            sp[k].column=j;
            sp[k].value=mat[i][j];
            k++;
        }
    }
}
printf("\tSPARSE MATRIX\nRow\tColumn\tValue");
for(i=0;i<k;i++)
{
    printf("\n");
    printf("%d\t%d\t%d",sp[i].row,sp[i].column,sp[i].value);


}
return 0;
}
