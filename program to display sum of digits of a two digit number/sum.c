#include<stdio.h>
int main () {
    
int n,a,b,c;
printf("Enter three digit number :");
scanf("%d",&n);
a=n/100;
b=(n/10)%10;
c=n%10;
int sum= a+b+c;
printf("The sum of digits of a three digit number is %d",sum);

return 0;
}