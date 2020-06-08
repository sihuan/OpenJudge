# 类型可变的类
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个Data类，至少包含1个int类型的数据成员、1个double类型的数据成员，定义其构造函数和析构函数，使得程序执行时，能产生样例所示的结果。

## Input
输入2行，第1行是1个int类型的数据，第2行是1个double类型的数据。

## Output
见样例。

## Sample Input
```
120
3.14

```
## Sample Output
```
A default object is created.
An integer object 120 is created.
A double object 3.14 is created.
The double object 3.14 is erased.
The integer object 120 is erased.
The default object is erased.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    Data d1;
    int i;
    cin>>i;
    Data d2(i);
    double d;
    cin>>d;
    Data d3(d);
    return 0;
}
```
