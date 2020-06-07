# Base与Derived
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Base和Derived类，Derived类是Base类的子类，两个类都只有1个int类型的属性。定义它们的构造函数和析构函数，输出信息如样例所示。

## Input
输入2个整数。

## Output
见样例。

## Sample Input
```
100
200

```
## Sample Output
```
Base 100 is created.
Base 100 is created.
Derived 200 is created.
Derived 200 is created.
Base 100 is created.
Base 100 is created.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int a, b;
    cin>>a>>b;
    Base base(a);
    Derived derived(a, b);
    return 0;
}
```
