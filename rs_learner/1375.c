#include<stdio.h>
int sumdata=0;
int add(int min)
{
    sumdata=sumdata+min;
    return sumdata;
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
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

