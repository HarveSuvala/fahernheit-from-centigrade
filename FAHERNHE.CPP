/* write a program to compute fahrenheit from centigrade */
#include<stdio.h>
int main()
{
float f,c;
printf("enter temperature in celsius: ")
scanf("%f",&c);
f = (c*1.8) + 32;
printf("/n %.2f celsius = %.2f faherheit", c, f);
return 0;
}