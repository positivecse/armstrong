void main()
{
int a,r,sum=0,t,n=0;
clrscr();
printf("Enter any number:");
scanf("%d",&a);
if(a<=100000)
{
t=a;
while(a!=0)
{
a=a/10;
++n;
}
t=a;
while(a>0)
{
r=a%10;
sum=sum+pow(r,n);
a=a/10;
}
t=a;
if(a==sum)
printf("Armstrong number");
else
printf("Not a Armstrong number");
}
else
{
printf("Out of Rangr");
}
getch();
}

