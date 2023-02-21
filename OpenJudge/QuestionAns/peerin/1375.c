#include <stdio.h>
int add(int n){
static sum = 0;
sum += n;
return sum;
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
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

