#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j;

for(i=0;i<=2;i++)
{
    for (j=0; j<=2;j++)
    {   
printf("enter the number");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<=2;i++)
{
      for (j=0; j<=2;j++)
      {
if((i+j)/2==0)

    printf("*");
    else
    printf("%3d",a[i][j]);
}
printf("\n");
}
getch();
}







