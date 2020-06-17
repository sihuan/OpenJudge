# 第一个类
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个Thing类，只有1个字符串属性name，定义其构造函数和析构函数，分别输出样例所示的内容。

## Input
一个不包含空白符的字符串。

## Output
见样例。

## Sample Input
```
Truck

```
## Sample Output
```
Construct a thing Car
Construct a thing Truck
Destroy a thing Truck
Destroy a thing Car

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    Thing A("Car");
    string str;
    cin>>str;
    Thing B(str);
    return 0;
}
```
