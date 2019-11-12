# 编写函数：求累加和 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
给出两整数min和max，求min到max之间的数的累加和。
-----------------------------------------------------------------------------
编写一个函数add()。函数原型为
int add(int n);
功能：每次调用都把参数n的值累加起来，并返回。
函数add()的调用格式见“Append Code”。

## Input
输入为两个整数min和max，且max>=min。

## Output
min和max之间所有整数的累加和，包括min和max。

## Sample Input
```
1 10
```
## Sample Output
```
55
```

## HINT
 add()函数里要用静态变量来存储累加和。当然用全局变量也行，不过还是练练怎么用静态变量吧。

## Append Code
### append.c
```c
int main()
{
    int min, max, sum;    
    scanf("%d%d", &min, &max);    
    while(min <= max)
        sum = add(min++);        
    printf("%d", sum);    
    return 0;
}
```
### append.cc
```cpp
int main()
{
    int min, max, sum;
    cin >> min >> max;
    while(min <= max)
        sum = add(min++);        
    cout << sum;
    return 0;
}
```
