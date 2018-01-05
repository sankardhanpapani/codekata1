#include<stdio.h>
int main()
{
float N;
printf("INPUT \n");
scanf("%f",&N);
if(N<0)
{
printf("negative");
}
else if(N>0)
{
printf("positive");
}
else if(N=0)
{
printf("zero");
}
return 0;
}
