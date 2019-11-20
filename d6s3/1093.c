#include<stdio.h>
#include<string.h>

int main()
{
    char mm[21],smm[21];
    int n=0;
    scanf("%s",mm);
    while(scanf("%s",smm)!=EOF){\
        if(n>=5)
            printf("Out of limited!\n");
        else if(!strcmp(mm,smm))
            printf("Welcome!\n");
        else
            printf("Wrong!\n");
        n++;
    }
}

/**************************************************************
	Problem: 1093
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

