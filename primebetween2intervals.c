#include<stdio.h>
int main() {
int num,i,count,min,max;
printf("Enter the min num:");
scanf("%d",&min);
printf("Enter the max num:");
scanf("%d",&max);
for(num=min;min<=max;num++) {
count=0;
for(i=2;i<=num/2;i++) {
if(num%i==0) {
count++;
break;
} }
if(count==0 && num!=1)
printf("%d",num);
}
return 0;
}
