#include<stdio.h>
int main()
{
int i , j ,r,k;
printf("enter the number of row:\n");
scanf("%d",&r);
for(i=0; i<r ;i++)
{
if(i<=(r/2))   //for printing first half
{
for(k= r/2 ; k>i ; k--)
{
printf(" ");
}
for(j=0; j<=i*2 ; j++)
{
printf("*");
}
}
else
{
for(k= r/2;k<i ; k++)
{
printf(" ");

}
for(j=0;j<((r-i)*2-1);j++)
{
printf("*");
}
}

printf("\n");
}
}


