#include<stdio.h>
#include<conio.h>
void square(int a,int b)
{
int result;
result=(a*a)+(b*b)+(2*(a+b));
printf("%d\n",result);
}
int main()
{
clrscr();
square(4,3);
getch();
return 0;
}