#include <stdio.h>
int main()
{
    int a,b,i,s,z;
    scanf("%d",&z);
    while (z>0){
        scanf("%d",&a);
        for (i=0,s=0;i<a;i++){
            scanf("%d",&b);
            s += b;
        } 
    printf("%d\n",s);
    z--;
    }
}
/**************************************************************
	Problem: 1043
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

