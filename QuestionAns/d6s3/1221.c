#include<stdio.h>
#include<stdlib.h>

void prsp(int n)
{
    int i;
    for(i=0;i<n;i++)
        putchar(' ');
}

int main()
{
    int n,x,y,i,j;
    scanf("%d",&n);
    for(y=-n/2,i=0;y<=0;y++,i++){
        prsp(n/2-i);
        for(x=-n/2,j=0;x<=n/2;x++){
            if(abs(x)+abs(y)<=n/2){
                printf("%c",65+i+j);
                j++;
            }
        }
        putchar('\n');
    }
    for(i-=2;y<=n/2;y++,i--){
        prsp(n/2-i);
        for(x=-n/2,j=0;x<=n/2;x++){
            if(abs(x)+abs(y)<=n/2){
                printf("%c",65+i+j);
                j++;
            }
        }
        putchar('\n');
    }
}

/**************************************************************
	Problem: 1221
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

