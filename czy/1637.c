#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 109

int f(int *b,unsigned long long x)
{
    int m=0;
    while(1)
    {
        if(x/2==0)
        {
            b[m]=x%2;
            ++m;
            break;
        }
        else
        {
            b[m]=x%2;
            x=x/2;
            ++m;
        }
    }
    return m;
}

int main()
{
    char a[300];
    int b[1009];
    while(gets(a)!=NULL)
    {
        int l=strlen(a);
        int ii;
        for(ii=0;ii<l;++ii)
        {
            if(a[ii]=='0') printf("0000");
            if(a[ii]=='1') printf("0001");
            if(a[ii]=='2') printf("0010");
            if(a[ii]=='3') printf("0011");
            if(a[ii]=='4') printf("0100");
            if(a[ii]=='5') printf("0101");
            if(a[ii]=='6') printf("0110");
            if(a[ii]=='7') printf("0111");
            if(a[ii]=='8') printf("1000");
            if(a[ii]=='9') printf("1001");
            if(a[ii]=='A') printf("1010");
            if(a[ii]=='B') printf("1011");
            if(a[ii]=='C') printf("1100");
            if(a[ii]=='D') printf("1101");
            if(a[ii]=='E') printf("1110");
            if(a[ii]=='F') printf("1111");


        }
        puts("");
    }
}

/**************************************************************
	Problem: 1637
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

