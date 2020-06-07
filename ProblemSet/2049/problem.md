# 类的初体验（II）
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个类Data，只有一个double类型的属性和如下3个方法：
1.   带1个参数的构造函数——初始化属性值为参数值。
2.   double getValue()——获得属性值。
3.    void showValue()——显示属性值。

## Input
一个double类型的数值。

## Output
输出输入的值2次，每次占一行。

## Sample Input
```
3.14

```
## Sample Output
```
3.14
3.14

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    double d;
    cin>>d;
    Data data(d);
    cout<<data.getValue()<<endl;
    data.showValue();
}
```
