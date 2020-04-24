//Name:- Abhay Kumar Modi

/*1 2 3
  4 5 6
  9 8 9
  The left-to-right diagonal 1+5+9=15.
  The right to left diagonal 3+5+9=17.
  Their absolute difference is |15-17|=2.*/

//code.
#include<stdio.h>
int main()
{
    int n, a[100][100],i,j,f,d1=0,d2=0,k;
    printf("Enter the value of n where n is number of columns or rows:- ");
    scanf("%d",&n);
    printf("Enter the value of elements of array:- \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    k=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                d1=d1+a[i][j];
            }
            else if(j-i==k)
            {
                d2=d2+a[i][j];
            }
        }
        k=k-2;
    }
    if(n%2!=0)
        d2=d2+a[n/2][n/2];
    if(d1>d2)
        f=d1-d2;
    else
        f=d2-d1;
    printf("Difference between the diagonals is:- %d",f);
    return 0;
}

