# 求个最大值
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义MaxValue类，用于求一系列非零整数的最大值。其中：
1. 数据成员elements用于存储所有输入的非零整数。
2. void append(int)用于向elements中添加一个新数据。
3. int getMax()用于求出elements中的最大值。


## Input
输入若干个整数，以输入0表示输入结束。


## Output
所有输入的非零整数中的最大值。


## Sample Input
```
321
496
553
338
837
463
158
154
929
537
0
```
## Sample Output
```
929

```

## HINT
使用vector更为容易实现。


## Append Code
### append.cc
```cppint main()
{
    int a;
    MaxValue test;
    cin>>a;
    while (a != 0)
    {
        test.append(a);
        cin>>a;
    }
    cout<<test.getMax()<<endl;
    return 0;
}

```
