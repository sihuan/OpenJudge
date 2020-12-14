#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    scanf("%c",&a);
  if(a=='y'||a=='Y')
        puts("Now, this dist is formatted!");
else
    if(a=='n'||a=='N')
        puts("You discard this operation.");
else
puts("Input error.");
    return 0;
}

/**************************************************************
	Problem: 1911
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

