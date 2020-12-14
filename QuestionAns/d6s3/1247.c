#include<stdio.h>
#include<string.h>

int main()
{
    char ar[101][11];
    char t[11];
    int N,n=0,i,j,a;
    scanf("%d",&N);
    while(N--)
        scanf("%s",ar[n++]);

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strlen(ar[i])>strlen(ar[j])){
                strcpy(t,ar[i]);
                strcpy(ar[i],ar[j]);
                strcpy(ar[j],t);
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            a=strcmp(ar[i],ar[j]);
            if((a>0&&strlen(ar[i])==strlen(ar[j]))){
                strcpy(t,ar[i]);
                strcpy(ar[i],ar[j]);
                strcpy(ar[j],t);
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%s\n",ar[i]);
}
/**************************************************************
	Problem: 1247
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

