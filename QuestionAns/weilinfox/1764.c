#include <stdio.h>



int main()
{
    int n;
    int get(int);

    scanf("%d", &n);
    printf("%d\n", get(n));

    return 0;
}

int get(int n)
{
    int get(int n);
    int ans;
    if (n) {
        scanf("%d", &ans);
        ans+=get(n-1);
    } else {
        return 0;
    }

    return ans;
}

/**************************************************************
	Problem: 1764
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

