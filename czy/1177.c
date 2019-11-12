#include<stdio.h>

int main()

{
char s[1002],s1[1002],s2[1002],s3[1002],s4[1002];
int b,a,n;
int i;
int g=0,j=0,k=0,l=0,m=0;
while(scanf("%d",&a)!=EOF)
    
{
if(a>=0&&a<=100)

{
    
    b = a/10;

    if(b>=9&&b<=10)
    
{
    g++;

    s[g]=a;
}
    else if(b>=8&&b<9)
{
    j++;
    s1[j]=a;
}
    else if(b>=7&&b<8)
{
    k++;
    s2[k]=a;
}
else if(b>=6&&b<7)
{
l++;
s3[l]=a;
}
else
{m++;
s4[m]=a;
}
}
}
printf("Excellent : %d\n",g);
for(i=1;i<g;i++)
printf("%d, ",s[i]);
if(i==g)
{
printf("%d\n",s[i]);
}
printf("Good : %d\n",j);
for(i=1;i<j;i++)
printf("%d, ",s1[i]);
if(i==j)
{
printf("%d\n",s1[i]);
}
printf("Average : %d\n",k);
for(i=1;i<k;i++)
printf("%d, ",s2[i]);
if(i==k)
{
printf("%d\n",s2[i]);
}
printf("Pass : %d\n",l);
for(i=1;i<l;i++)
printf("%d, ",s3[i]);
if(i==l){
printf("%d\n",s3[i]);

}
printf("Failing : %d\n",m);

for(i=1;i<m;i++)

printf("%d, ",s4[i]);

if(i==m)

{

printf("%d\n",s4[i]);
}
return 0;

}



/**************************************************************
	Problem: 1177
	User: 201601160202
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

