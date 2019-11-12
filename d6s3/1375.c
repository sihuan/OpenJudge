#include<stdio.h>

int add(int n)
{
    static int s;
    s += n;
    return s;
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

