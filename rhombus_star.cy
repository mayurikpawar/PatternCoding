#include<stdio.h>
int main()
{
int i ,j,l;
printf("Enter the no of row\n");
scanf("%d",&l);
for(i=0;i<l;i++)
{
for(j=0;j<l;j++)    //for printing space
{
printf("");
}
for(j=0 ; j< l ;j++) // for printing star
{
printf("*");
}
printf("\n"); // for printing new line
}
}
