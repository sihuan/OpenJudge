#include<stdio.h>

int digit_sum(int num){
	int s=0;
	while(num!=0){
		s+=num%10;
		num=num/10;
	}
	if(s>=10){
		s=digit_sum(s);
	}
	return s;
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", digit_sum(n));
    return 0;
}
/**************************************************************
	Problem: 1271
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

