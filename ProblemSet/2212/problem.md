# 杯子
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个Cup类，包含一个int类型的属性volume，表明杯子的容量。定义其构造函数、析构函数和拷贝构造函数，分别产生类似样例所示的输出。定义一个setVolume(int)函数，用于设置杯子的新容量。

## Input
两个非负整数。

## Output
见样例。

## Sample Input
```
400
500
```
## Sample Output
```
A cup of 0 ml is created.
A cup of 400 ml is created.
A cup of 400 ml is copied.
A cup of 500 ml is erased.
A cup of 400 ml is erased.
A cup of 0 ml is erased.
```

## HINT


## Append Code
### append.cc
```cppint main()
{
    Cup c1;
    int i, j;
    cin>>i>>j;
    Cup c2(i), c3(c2);
    c3.setVolume(j);
    return 0;
}
```
