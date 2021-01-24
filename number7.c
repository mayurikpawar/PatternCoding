#include<stdio.h>
int main()
{

int i ,j , r ,count;
 printf("enter the number of row ");
 scanf("%d", &r);
count =2;
for(i = 0; i < r ; i++)
{
for(j = 0 ; j < i ; j++)
{
printf("%d", count);
}
count ++;
printf("\n");
}

}

