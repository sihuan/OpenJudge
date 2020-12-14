#include<stdio.h>
#include<math.h>
int sushu(int c)
{
    int i,j,flag,m;
    m=sqrt(c);
    for(i=2;i<=m;i++)
    {
        if(c%i==0)
            break;
        else
            continue;
    }
    if(i>m)
        return 1;
    else
        return 0;
}
int main()
{
    int i,j,k,odd;
    scanf("%d",&odd);
    for(i=3;i<odd-2;i++)
    {
        for(j=i;j<odd-2;j++)
        {
            if(sushu(i)==1&&sushu(j)==1&&i%2!=0&&j%2!=0&&i+j==odd)
            {
                printf("%d + %d = %d\n",i,j,i+j);
            }

        }
    }
    return 0;
}
/**************************************************************
	Problem: 1456
	User: 201801020908
	Language: C
	Result: Accepted
	Time:928 ms
	Memory:756 kb
****************************************************************/

