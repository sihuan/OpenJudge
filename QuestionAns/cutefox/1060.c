#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char min[10000]  = "", max[10000] = "";
    char a[10000], b[10000];
    int i, lmin, lmax, lena, lenb;
    while(scanf("%s", a) != EOF)
    {
        i = 0;
        lena = strlen(a);
        while(a[i] == '0' && i < lena - 1)
            i++;
        strcpy(b, a + i);//联想到指针的知识
        lmax = strlen(max);
        lmin = strlen(min);
        lenb = strlen(b);
        if(lenb > lmax || (lenb == lmax && strcmp(b , max) > 0))
            strcpy(max, b);
        if(strcmp(min,"") == 0 || lenb < lmin ||(lenb == lmin && strcpy(b ,min) < 0))
            strcpy(min ,b);
    }
    printf("The maximum value is : %s\n",max);
    printf("The minimum value is : %s\n",min);
}

/**************************************************************
	Problem: 1060
	User: 201901060203
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

