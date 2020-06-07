# 模板是个好东西
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Point类：
1. 有两个int类型的数据成员，表示其横纵坐标。
2. 无参构造函数，初始化两个坐标为0。
3. 带参构造函数。
4. 重载其输出运算符<<，用于输出一个点的横坐标和纵坐标，中间用一个空格隔开。
定义一个类模板Data：
1. 只有一个数据成员data，data的类型是由类型参数指定的。
2. 定义该类模板的构造函数。
3. 定义void show()方法，用于显示data的值。


## Input
输入有5行。
第1行是一个不含空白符的字符串。
第2~4行分别是一个整数，其中第2、3行是点的坐标值。
最后一行是一个字符。


## Output
见样例。


## Sample Input
```
test
1
2
3
c

```
## Sample Output
```
c
3
test
1 2

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    string n;
    int x, y, d;
    char c;
    cin>>n;
    cin>>x>>y>>d;
    cin>>c;
    Point p(x, y);
    Data<char> aChar(c);
    Data<int> anInt(d);
    Data<Point> aPoint(p);
    Data<string> aString(n);
    aChar.show();
    anInt.show();
    aString.show();
    aPoint.show();
    return 0;
}
```
