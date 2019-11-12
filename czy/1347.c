#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char yuanyin;
    scanf("%c",&yuanyin);
    if(yuanyin=='A' || yuanyin=='E' || yuanyin=='I' || yuanyin == 'O' ||  yuanyin =='U' ||  yuanyin == 'a' || yuanyin == 'e' || yuanyin =='i' || yuanyin=='o' || yuanyin =='u' )
   printf("yes");
   else printf("no");
    return 0;
}

/**************************************************************
	Problem: 1347
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

