#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    getch();
}