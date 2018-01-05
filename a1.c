#include<stdio.h>
int main()
{
float N;
printf("enter any number \n");
scanf("%f",&N);
if(N<0)
{
printf("negative number");
}
else if(N>0)
{
printf("positive number");
}
else
{
printf("entered number is ZERO");
}
return 0;
}
