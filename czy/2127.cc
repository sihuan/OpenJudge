#include <stdio.h>
#include <string.h>
const int maxn = 1005;
int judge(char ch)
{
    if(ch == '#' || ch == '@' || ch == '&' || ch == '$' || ch == '!' || ch == '*')
        return 3;
    else if('0' <= ch && ch <= '9') return 1;
    else if('a' <= ch && ch <= 'z') return 2;
    else if('A' <= ch && ch <= 'Z') return 4;
    return 0;
}
int main()
{
    int n;
    char x[maxn];
    scanf("%d",&n);
    getchar();
    for(int i=0; i<n; i++)
    {
        gets(x);
        int len = strlen(x);
        bool ok1 = false;
        bool ok2 = false;
        bool ok3 = false;
        bool ok4 = false;
        for(int i=0; i<len; i++)
        {
            char ch = x[i];
            int num = judge(ch);
            if(num == 1) ok1 = true;
            else if(num == 2) ok2 = true;
            else if(num == 3) ok3 = true;
            else if(num == 4) ok4 = true;
        }
        printf("Case %d: ",i+1);
        if(ok1 && ok2 && ok3 && ok4) printf("Yes\n");
        else printf("No\n");
    }
}
/**************************************************************
	Problem: 2127
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:800 kb
****************************************************************/

