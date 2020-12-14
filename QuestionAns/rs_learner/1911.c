#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='Y'||a=='y')
        printf("Now, this dist is formatted!");
    else if(a=='N'||a=='n')
        printf("You discard this operation.");
    else
        printf("Input error.");


    return 0;
}
/**************************************************************
	Problem: 1911
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

