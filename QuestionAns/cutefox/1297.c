#include <stdio.h>
#include <stdlib.h>

int main()
{
int y,i,b,c,d,e;
    while(scanf("%d",&y)!=EOF){
for(i=y+1;i<10000;i++){
     b=i/1000;
     c=i/100%10;
     d=i/10%10;
     e=i%10;
     if(b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e){
        printf("%d\n",i);
         break;
     }
}
    }


    return 0;
}
/**************************************************************
	Problem: 1297
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

