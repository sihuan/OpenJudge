#include<stdio.h>
int main()
{
    int a,i,m;
    int zd[101]={0};
    while(scanf("%d",&a)!=EOF){
        if(a<0||a>100)
            continue;
        zd[a]+=1;
    }
    for(i=0,m=0;i<101;i++){
        if(zd[i]>m)
            m=zd[i];
    }
    for(i=0;i<101;i++){
        if(zd[i]==m)
            printf("%d\n",i);
    }
}
/**************************************************************
	Problem: 1178
	User: 201901060610
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

