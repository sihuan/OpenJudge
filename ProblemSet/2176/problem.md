# 
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
猴子第一天摘下N个桃子，当时就吃了一半，还不过瘾，就又多吃了一个。
第二天又将剩下的桃子吃掉一半，又多吃了一个。以后每天都吃前一天剩下的一半
零一个。到第K天在想吃的时候就剩一个桃子了,问第一天共摘下来多少个桃子？现在
要求编写一个函数实现输入一个K输出第一天猴子摘下地桃子总数N；


## Input
输入一个K，表示猴子第k天想吃桃子时只剩下一个桃子，多组输入；
1<=k<=55;


## Output
输出第一天的桃子总数N；



## Sample Input
```
1

```
## Sample Output
```
1

```

## HINT


## Append Code
### append.c
```c#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%lld\n",Monkey(1,n));
    }
    return 0;
}
```
