#include<stdio.h>
#include<conio.h>
#define N 100
int main()
{
    int i,j,r,c,a[N][N];
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
    for(i=0;i<r;i++)
{
    for(j=0;j<r;j++)
    {
        if(i>j && a[i][j])
    }
}    