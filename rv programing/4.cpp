// Write a program in multidimensional array and enter elements and display in the form of matrix. //

#include<stdio.h>
#include<conio.h>
#define N 100
int main()
{
    int i,j,r,c,a[N][N],nz=0,z=0,k=0,s[N][3];
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
            for(j=0;j<c;j++)
            {
                if(a[i][j]==0)
                {
                    z++;
                }
                else{
                    nz++;
                    }    
                        }
                }
                if(nz>z)
                {
                    printf("Dense Matrix\n");
                }
                else
                {
                    printf("Sparse Matrix");
                }
                for(i=0; i < r; i++)
                {
                   for (j=0; j < c; j++)
                   {
                    if(a[i][j]!=0)
                    {
                        s[k][0]=i;
                        s[k][1]=j;
                        s[k][2]=a[i][j];
                        k++;
                    }
                   }
                }
  for( i = 0; i < nz; i++)
{
    for (j=0; j < 3; j++)
    {
        printf("%d\t",s[i][j]);
    }
    printf("\n");
}
return 0;
}