#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[100]={0};
    while(scanf("%s",s)!=EOF){
        int len = strlen(s);
        int res=0;
        for(int i = 0;i<len;++i){
                int num;
        if(s[i]>='0'&&s[i]<='9')   num=s[i]-'0';
        else num=s[i]-'A'+10;
            res+=pow(16,len-1-i)*num;
        }
        printf("%d\n",res);
    }
    return 0;
}

/**************************************************************
	Problem: 2691
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

