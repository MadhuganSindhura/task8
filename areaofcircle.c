#include<stdio.h>
void areaOfCircle(int r)
{
cons float pi=3.14;
float result;
result= pi*(r*r);
printf("%f\n",result);
}
int main()
{
clrscr();
areaOfCircle(10);
getch();
return 0;}