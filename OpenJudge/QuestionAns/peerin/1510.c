#include <stdio.h>
#include <stdlib.h>

typedef struct monkey{
    int index;
    struct monkey *next;
}monkey;

int find_king(int m, int n){
    monkey *mm=malloc(sizeof(monkey)*m);

    for(int i = 1;i<=m;++i){
        mm[i-1].index=i;
        if(i==m)mm[i-1].next=&mm[0];
        else mm[i-1].next=&mm[i];
    }
//printf("hh\n");
    monkey *last=&mm[m-1];
    monkey *cur=&mm[0];

while(last->next!=last){
    int cnt=1;
    while(cnt<=n){
        if(cnt==n){last->next=cur->next;cnt++;}
        else{
            last=cur;
            cur=cur->next;
            cnt++;
            //printf("%d %d\n",cnt,n);
        }
    }
    cur=cur->next;
}
int ret=last->index;
    free(mm);
return ret;
}

int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF){
        int king=find_king(m,n);
        printf("%d\n",king);
    }
    return 0;
}

/**************************************************************
	Problem: 1510
	User: 202211070518
	Language: C
	Result: Accepted
	Time:148 ms
	Memory:748 kb
****************************************************************/

