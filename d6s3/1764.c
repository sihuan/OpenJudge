#include <stdio.h>

int s;

int qh(int k)
{
    int n;
    if(k==0){
        printf("%d", s);
        return 1;
    }
    scanf("%d", &n);
    s += n;
    return qh(k-1);
}

int main()
{
    int k;
    scanf("%d", &k);
    qh(k);
}

/**************************************************************
	Problem: 1764
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

