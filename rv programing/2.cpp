// Sum of Array//

#include<stdio.h>
#include<conio.h>
#define N 100
int ar[N];
int main()
{
    int i,n,sum=0;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    printf("Enter the elements = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=ar[i];
    }
    printf("Sum = %d",sum);
    return 0;
}