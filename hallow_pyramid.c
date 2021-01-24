#include<stdio.h>
int main()
{
int i ,j,k,l;
printf("Enter the no of row\n");
scanf("%d",&l);
for(i=0;i<l;i++)
{
for(k= l; k> i +1;k--) // for initial space
{
printf(" ");
}
for(j = 0 ;j <  i*2 ;j++) // for printing star in last row
{
if(i== l -1)
{
printf("*");
}
else
{
if(j==0 || j>=i*2) // condition to print star
{
printf("*");
}
else 
{
printf(" ");
}
}
}
printf("\n");
}}
