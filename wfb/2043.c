#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1005
#define MAX_LENGTH 105
typedef char string[MAX_LENGTH];
string a[MAX_SIZE];
int isTrue(int n,string temp)
{
    int i;
    int is = 0;
    for(i=0; i<n; ++i)
        if(strcmp(a[i],temp) == 0)
        {
            is = 1;
            break;
        }
    return is;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        scanf("%s",&a[i]);
    }
    string temp;
    while(scanf("%s",&temp) != EOF)
    {
        if(isTrue(n,temp)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

/**************************************************************
	Problem: 2043
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:848 kb
****************************************************************/

