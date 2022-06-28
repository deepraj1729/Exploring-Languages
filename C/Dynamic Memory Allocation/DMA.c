#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,*p,sum =0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    printf("\n Enter the Numbers:\n ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
        sum = sum+p[i];

    }
    printf("\nThe sum of the numbers = %d",sum);
    return 0;
}