#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int i;
    char max[1005], min[1005], tmp[1005];
    int f;
    void cutHead(char*);
    int judge(char*, char*);

    scanf("%s", max);
    cutHead(max);
    strcpy(min, max);
    while (scanf("%s", tmp)==1) {
        cutHead(tmp);
        if (judge(tmp, max))
            strcpy(max, tmp);
        if (judge(min, tmp))
            strcpy(min, tmp);
    }
    printf("The maximum value is : %s\n"
            "The minimum value is : %s\n", max, min);

    return 0;
}

void cutHead(char* ch)
{
    int i, j;
    if (strlen(ch)!=1) {
        for (i=0; ch[i]=='0'; i++) ;
        if (i==strlen(ch))
            i--;
        for (j=0; j+i<strlen(ch); j++)
            ch[j]=ch[j+i];
        ch[strlen(ch)-i]='\0';
    }
}

int judge(char* ch1, char* ch2)
{
    int i;
    if (strlen(ch1)>strlen(ch2))
        return 1;
    else if (strlen(ch1)<strlen(ch2))
        return 0;
    else {
        for (i=0; i<strlen(ch1); i++) {
            if (ch1[i]>ch2[i])
                return 1;
            else if (ch1[i]<ch2[i])
                return 0;
        }
    }

    return 0;

}

/**************************************************************
	Problem: 1060
	User: 201901060401
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

