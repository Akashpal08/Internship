// Write a program in multidimensional array and enter elements and display in the form of matrix. //

#include<stdio.h>
#include<conio.h>
#define N 100
int main()
{
    int i,j,r,c,a[N][N],n;
    printf("Enter the size of rows and coluns = ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("the resultant array = \n");
    for(i=0;i<r;i++)
    {
            for(j=0;j<c;j++)
            {
            printf("%d\t",a[i][j]);
            }
            printf("\n");
    }
    return 0;
}