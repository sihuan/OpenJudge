#include<stdio.h>

int add(int n)
{
    static int sum;
    sum+=n;
}

int main()
{
    int min, max, sum;    
    scanf("%d%d", &min, &max);    
    while(min <= max)
        sum = add(min++);        
    printf("%d", sum);    
    return 0;
}
/**************************************************************
	Problem: 1375
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

