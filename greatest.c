#include<stdio.h>
#include<conio.h>
void greatest(int a,int b)
{
int result;
result=a>b?a:b;
printf("%d",result);
}
int main()
{
clrscr();
greatest(1,2);
getch();
return 0;
}