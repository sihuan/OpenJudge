#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b){
return *(int *)a-*(int *)b;
}

void max_min(int *max, int *min, int a[], int len){
qsort(a,len,sizeof(a[0]),cmp);
*max=a[len-1];
*min=a[0];
}


int main()
{
    int max, min, ar[100], i, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    max_min(&max, &min, ar, n);
    printf("%d %d\n", min, max);
    return 0;
}

/**************************************************************
	Problem: 2687
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

