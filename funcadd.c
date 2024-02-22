#include<stdio.h>
#include<conio.h>
void dosum(int n1,int n2)
{
int result;
result=n1+n2;
printf("%d\n",result);}
int main()
{
clrscr();
dosum(100,200);
dosum(30,100);
getch();
return 0;
}