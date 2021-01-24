//print lenght of maximum signal
#include<stdio.h>
int main()
{int i;
int n;

scanf("%d",&n);
char arr[n+1];
int max = 0;
int  count =0;
int flag = 0;

for( int i = 0; i< n ; i++)
{
scanf("%s",&arr[i]);
}
for(i = 0; i < n ; i++)
{
if (arr[i]=='1')
{
count++;
flag =1;
}
else if(arr[i]=='0' && flag ==1)
{
count =0;
flag = 0;
}
if(count > max)
{
max = count;
}

}
printf("%d", max);
return 0 ;
}
