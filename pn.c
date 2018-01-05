#include<stdio.h>
#include<iostream.h>
int main()
{
float N;
printf("enter any number");
scanf("%f", &N);
if(N<0)
{ 
printf("negative number");
}
elseif(N>0)
{
printf("positive number");
}
else
{
print("entered number is ZERO");
}
return 0;
}
