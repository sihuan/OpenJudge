# 新型乘法运算
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Integer类，只有一个int类型的属性value。包括如下成员函数：
1. void setValue(int)： 设置value为参数的值。
2. int getValue()：获取value的值。
3. 重载乘法运算。新的乘法定义为：对于数值n，如果乘数是m，那么将n重复m次形成一个新的数。如：34 * 3 = 343434。注意：34 * 1 = 34。
4. 重载=运算符。

## Input
输入有多行，第1行是Integer类的对象M的属性值。
之后的第2行N表示后面还有N行输入，每行输入是一个正整数，表示对M的乘数。

## Output
N个新的Integer对象的值，每个是M的值乘以相应的乘数。假定所有的输出都不会溢出。

## Sample Input
```
1
10
1
2
3
4
5
6
7
8
9
10

```
## Sample Output
```
1
11
111
1111
11111
111111
1111111
11111111
111111111
1111111111

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    Integer M, N;
    int a, n, m;
    cin>>a;
    M.setValue(a);
    cin>>n;
    while (n--)
    {
        cin>>m;
        N = M * m;
        cout<<N.getValue()<<endl;
    }
    return 0;
}
```
