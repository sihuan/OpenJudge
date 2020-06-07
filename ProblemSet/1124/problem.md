# 平面上的点——Point类 (IV)
Time Limit: 1 Sec  Memory Limit: 4 MB


## Description
在数学上，平面直角坐标系上的点用X轴和Y轴上的两个坐标值唯一确定。现在我们封装一个“Point类”来实现平面上的点的操作。

根据“append.cc”，完成Point类的构造方法和show()、showCounter()、showSumOfPoint()方法；实现showPoint()函数。

接口描述：
showPoint()函数：按输出格式输出Point对象，调用Point::show()方法实现。
Point::show()方法：按输出格式输出Point对象。
Point::showCounter()方法：按格式输出当前程序中Point对象的计数。
Point::showSumOfPoint()方法：按格式输出程序运行至当前存在过的Point对象总数。

## Input
输入多行，每行为一组坐标“x,y”，表示点的x坐标和y坐标，x和y的值都在double数据范围内。

## Output
对每个Point对象，调用show()方法输出其值，或者用showPoint()函数来输出（通过参数传入的）Point对象的值：X坐标在前，Y坐标在后，Y坐标前面多输出一个空格。每个坐标的输出精度为最长16位。调用用showCounter()方法和showSumOfPoint()输出Point对象的计数统计，输出格式见sample。

C语言的输入输出被禁用。

## Sample Input
```
1,2
3,3
2,1
```
## Sample Output
```
Point : (1, 2)
Current : 2 points.
Point : (3, 3)
Current : 2 points.
Point : (2, 1)
Current : 2 points.
In total : 4 points.
Current : 3 points.
Point : (0, 0)
Point : (1, 1)
Point : (0, 0)
In total : 6 points.
```

## HINT
对象计数通过静态成员来实现

## Append Code
### append.cc
```cppint main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        p.show();
        p.showCounter();
    }
    q.showSumOfPoint();
    Point q1(q), q2(1);
    Point::showCounter();
    showPoint(q1, q2, q);
    Point::showSumOfPoint();
}
```
