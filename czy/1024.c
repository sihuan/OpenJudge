#include <stdio.h>
int main()
 {
        int n,i;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;++i)
        {
            scanf("%d",&a[i]);
        }
        int max=a[0];
        int min=a[0];
        for(i=0;i<n;++i)
        {
            if(max<a[i]) max=a[i];
            if(min>a[i]) min=a[i];
        }
        printf("The maximum number is %d.\n",max);
        printf("The minimum number is %d.\n",min);
            return 0;
       }

/**************************************************************
	Problem: 1024
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

