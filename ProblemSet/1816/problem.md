# 强悍的矩阵运算来了
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个Matrix类，用于存储一个矩阵。重载其+、*运算符，分别用于计算两个矩阵的和、乘积；重载其<<和>>运算符，用于输出和输入一个矩阵。要求当两个矩阵不能进行加法或乘法运算时，应该输出Error。


## Input
输入第1行N>0，表示有N组测试用例，共2N个矩阵。
每组测试用例包括2个矩阵。每个矩阵首先输入行数、列数，之后是该矩阵的所有元素。


## Output
每个测试用例产生一组输出。具体格式见样例。注意：当不能进行加法或乘法运算时，应输出Error。


## Sample Input
```
3
2 2
1 1
1 1
2 2
2 2
2 2
1 1
1
1 2
2 2
1 1
1
2 2
2 2
2 2

```
## Sample Output
```
Case 1:
3 3
3 3

4 4
4 4
Case 2:
Error

2 2
Case 3:
Error

Error

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases, i;
    cin>>cases;
    for (i = 0; i < cases; i++)
    {
        Matrix A, B, C, D;
        cin>>A>>B;
        C = A + B;
        D = A * B;
        cout<<"Case "<<i + 1<<":"<<endl;
        cout<<C<<endl;
        cout<<D;
    }
    return 0;
}
```
