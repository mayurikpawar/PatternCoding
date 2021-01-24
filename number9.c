#include<stdio.h>
int main()
{

int i ,j , r ,count, count1;
count =0;
 printf("enter the number of row ");
 scanf("%d", &r);
for(i=1; i<=r ; i++)
{
count+=i;
}
for(i = 0; i < r ; i++)
{
count = count-r+i;
count1 = count;
for(j = r ; j > i ; j--)
{
count++;
if(j!= r)
printf("*%d", count);
else
printf("%d", count);
}

printf("\n");
count = count1;
}

}




