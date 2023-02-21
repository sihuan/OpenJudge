#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
int main()
{
    int m,n;
    //freopen("123.txt","r",stdin);
    scanf("%d%d",&m,&n);
    getchar();
    char name[109][30];
    int a[109][27]={0};
    int b[109];
    int i,j;
    for( i=0;i<m;++i)
    {
        scanf("%s",name[i]);
        for( j=0;j<n;++j)
        {
            char as;
            scanf(" %c",&as);
            a[i][j]=as;
        }
        scanf("%d",&b[i]);
    }
    int k;
    int max=0;
    for(i=0;i<m;++i)
    {
        int l=strlen(name[i]);
        if(l>max) max=l;
    }
    for( i=0; i<m; ++i)
    {
        printf("%s",name[i]);
        int jk,l2=strlen(name[i]);

        for(jk=0;jk<max-l2;++jk) printf(" ");
        printf(":");
        int flag1=0,flag=0,flag2=0;
        for(k=0; k<m; ++k)
        {
            if(k==i) continue;
            flag1=0;
            for(j=0; j<n; ++j)
            {
                if(a[i][j]==a[k][j]) flag1++;
                if(flag1>=b[i])
                {
                    if(flag==0) printf("%s",name[k]);
                    else printf(",%s",name[k]);
                    flag=1;
                    flag2=1;
                    break;
                }
            }
        }

        if(flag2==0) printf("NONE!");
        printf("\n");
    }
}
/**************************************************************
	Problem: 1078
	User: 202211070518
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

