void main()
{
int a,r,sum=0,t;
clrscr();
printf("Enter any number:");
scanf("%d",&a);
t=a;
if(a<=100000)
{
while(a>0)
{
r=a%10;
sum=sum+r*r*r;
a=a/10;
}
if(t==sum)
printf("Armstrong number");
else
printf("Not a Armstrong number");
}
else
{
printf("Out of Range");
}
getch();
}

