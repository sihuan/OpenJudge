#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/un.h>

int main()
{
    int a=0;
    int t=0;
    char c;
    int flag=0;

    while ((c=getchar())!=EOF) {
        if (!isdigit(c)) {
            flag=0;
        } else {
            flag=1;
        }
        if (flag) {
            t=t*10+c-'0';
        } else {
            a+=t;
            t=0;
        }
    }

    printf("%d", a);



    return 0;
}

/**************************************************************
	Problem: 1011
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:800 kb
****************************************************************/

