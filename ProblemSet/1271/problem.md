# 编写函数：各位数字之和 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
给定一个正整数，求它的各位数字之和，直到这个和只有一位数为止。
例如，给出整数1236，那么计算
1+2+3+6=12
因为12是一个两位数，所以继续求和
1+2=3
得到结果为：3。
-----------------------------------------------------------------------------
编写一个函数digit_sum()完成求和的功能：
原型：int digit_sum(int num);
功能：返回整数num的各个位数字之和。
函数的调用格式见“Append Code”。


## Input
一个int类型的正整数N。


## Output
N的各位数字之和，并不断求和，直到所求的和只有一位数字为止。


## Sample Input
```
1236
```
## Sample Output
```
3
```

## HINT


## Append Code
### append.c
```c
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", digit_sum(n));
    return 0;
}
```
### append.cc
```cpp
int main()
{
    int n;
    cin >> n;
    cout << DigitSum(n);
    return 0;
}
```
