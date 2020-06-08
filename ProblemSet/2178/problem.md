# 
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
要求编写一个“Binary”函数，每输入一个n，要求输出这个数的二进制形式，主函数已给出；



## Input
一个数n，多组输入；
0<=n<=10000；


## Output
这个数n的二进制；


## Sample Input
```
1

```
## Sample Output
```
1

```

## HINT
append中可以查看主函数；


## Append Code
### append.c
```c#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        if(!n)
            printf("0");
        Binary(n);
        printf("\n");
    }
    return 0;
}

```
