#include<stdio.h>
int main()
{
   int a=25, b=100;
   printf("Before swapping a=%d, b=%d \n", a, b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("After swapping a=%d, b=%d \n", a, b);
   return 0;
}
