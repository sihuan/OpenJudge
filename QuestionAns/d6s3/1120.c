#include<stdio.h>
int main()
{
    int a,zs=0,fs=0;
    double avgz,avgf;
    while(scanf("%d",&a) && a!=0){
        if (a>0){
            avgz+=a;
            zs++;
        }
        else{
            avgf+=a;
            fs++;
        }
    }
    if (fs!=0)
        printf("%d %.2lf\n",fs,avgf/fs);
    else printf("0\n");
    if (zs!=0)
        printf("%d %.2lf\n",zs,avgz/zs);
    else printf("0\n");
}

/**************************************************************
	Problem: 1120
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

