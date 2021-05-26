#include<stdio.h>
#include<string.h>
int main()
{
char str[10000];
scanf("%s",str);
int k;
scanf("%d",&k);
int n=strlen(str);
for(int i=0;i<n;i++)
{
int a=(int)str[i];
int p=k;
if(a>=65&&a<=90)
{
p=p%26;
a=a+p;
if(a>90)
a=a-26;
}
else if(a>=97&&a<=122)
{
p=p%26;
a=a+p;
if(a>122)
a=a-26;
}
else if(a>=48&&a<=57)
{
p=p%10;
a=a+p;
if(a>57)
a=a-10;
}
else
a=a;
char c=a;
printf("%c",c);
}
}
