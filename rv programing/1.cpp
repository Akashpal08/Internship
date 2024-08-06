// Enter elements into an array and display.//

#include<stdio.h>
#include<conio.h>
#define N 100
int ar[N];
int main()
{
    int i,n;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    printf("Enter the elements = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("the resultant array = \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}