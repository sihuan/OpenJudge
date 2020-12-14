 #include  <stdio.h>
int main()
{  int k,m,n;
    scanf("%d %d %d",&k,&m,&n);
    int a=1,i=0;
    for(;a<=k;)
    {
    if((a%m==0&&a%n!=0)||(a%m!=0&&a%n==0)&&(a%(m*n)!=0))
    {
    if(i!=0)printf(" %d",a);
    else printf("%d",a);
    i++;
    }
    a++;
    }


    return 0;
}














/**************************************************************
	Problem: 1019
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

