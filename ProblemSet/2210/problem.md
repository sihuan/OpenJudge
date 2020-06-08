# 回文素数
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个类SpecialPrime，只有一个静态成员函数
bool judge(int value)
用于判断value是否是一个回文素数。所谓回文素数是指一个数既是回文数又是素数。

## Input
输入两个数m和n，0<m<n。

## Output
区间[m,n]内的所有回文素数。

## Sample Input
```
2 1000

```
## Sample Output
```
2
3
5
7
11
101
131
151
181
191
313
353
373
383
727
757
787
797
919
929

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int m, n, i;
    cin>>m>>n;
    for (i = m; i < n; i++)
    {
        if (SpecialPrime::judge(i))
            cout<<i<<endl;
    }
    return 0;
}
```
