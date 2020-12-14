#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX_SIZE 1000

int main()
{
    int i;
    int n=0, m;
    char ch[100005];
    int a[6];

    while (gets(ch)!=NULL) {
        n++;
        memset(a, 0, sizeof a);
        for (i=0; ch[i]!='\0'; i++) {
            switch (ch[i]) {
            case 'a':
            case 'A':
                a[0]++;
                break;
            case 'e':
            case 'E':
                a[1]++;
                break;
            case 'i':
            case 'I':
                a[2]++;
                break;
            case 'o':
            case 'O':
                a[3]++;
                break;
            case 'u':
            case 'U':
                a[4]++;
                break;
            }
        }
        if (n>1)
            putchar('\n');
        printf("case %d :\n", n);
        int sum=0;
        for (i=0; i<strlen(ch); i++) {
            if (isalpha(ch[i])) {
                sum++;
            }
        }
        printf("A : %7.4lf%%\nE : %7.4lf%%\nI : %7.4lf%%\nO : %7.4lf%%\nU : %7.4lf%%\n",
               a[0]*1.0/sum*100, a[1]*1.0/sum*100, a[2]*1.0/sum*100, a[3]*1.0/sum*100, a[4]*1.0/sum*100);
    }


    return 0;
}


/**************************************************************
	Problem: 1237
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:772 kb
****************************************************************/

