#include<stdio.h>
int add(int l,int b)
{
return(l+b);

}

int f(int l,int b)
{
   return(l*b);
    
}
int main()

{
   int a,b,area,mul;
printf("enter the value A");
scanf("%d",&a);
printf("enter the value b");
scanf("%d",&b);
area=add(a,b);
printf("%d\n",area);
mul=f(a,b);
printf("%d",mul);
}
/*int add(int l,int b)
{
return(l+b);

}

int f(int l,int b)
{
   return(l*b);
    
}*/