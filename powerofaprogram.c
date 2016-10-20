#include<stdio.h>
int main() {
int base,exponent;
long long result=1;
printf("Enter the base: ");
scanf("%d",&base);
printf("\nEnter the exponent: ");
scanf("%d",&exponent);
while(exponent!=0) {
result=result*base;
--exponent; }
printf("%lld",result);
return 0;
}
