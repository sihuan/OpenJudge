#include<stdio.h>
int main()
{
    int a,b,c,z,d,e,f;
    scanf("%d%d%d%d",&a,&b,&c,&z);
    scanf("%d%d%d",&d,&e,&f);
    if (d>=a){
        if (e>=b){
            if (f>=c){
                if ((d+e+f >= z)){
                    printf("congratulations");
                }
                else printf("sorry");
            }
            else printf("sorry");
        }
        else printf("sorry");
    }
    else printf("sorry");
}

/**************************************************************
	Problem: 1404
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

