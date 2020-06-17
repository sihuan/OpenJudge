# 圆的面积
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Circle类，有一个私有的、double类型的属性radius，表示圆的半径。有一个公有的、double类型的常静态数据成员PI=3.14，表示圆周率。定义getArea()和getRadius()方法，返回圆的面积和半径。注意：在定义上述两个方法时，要保证程序能正确执行。

## Input
一个double类型的数据。

## Output
见样例。

## Sample Input
```
3.15

```
## Sample Output
```
PI=3.14
radius=2,area=12.56
radius=3.15,area=31.1566

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    double radius;
    cout<<"PI="<<Circle::PI<<endl;
    const Circle c1(2);
    cout<<"radius="<<c1.getRadius();
    cout<<",area="<<c1.getArea()<<endl;
    cin>>radius;
    Circle c2(radius);
    cout<<"radius="<<c2.getRadius();
    cout<<",area="<<c2.getArea()<<endl;
    return 0;
}
```
