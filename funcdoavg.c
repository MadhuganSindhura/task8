#include<stdio.h>
#include<conio.h>
int dosum(int n1,int n2)
{
int result;
result=n1+n2;
return result;
}
void doaverage(int a,int b,int c,int d,int e,int f)
{
float result;
result=(dosum(a,b)+dosum(c,d)+dosum(e,f))/6;
printf("%f\n",result);
}
int main()
{
clrscr();
doaverage(10,20,30,40,50,60);
 getch();
 return 0;
 }