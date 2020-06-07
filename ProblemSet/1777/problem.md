# 从点到面
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
一个矩形可以由左上角和右下角的顶点而唯一确定。现在请定义两个类：Point和Rectangle。
其中Point类有x和y两个属性（均为int类型），表示二维空间内一个点的横纵坐标，并具有相应的构造函数、析构函数和拷贝构造函数。此外，还有getX()和getY()方法用以得到一个点的坐标值。
Rectangle类有leftTop和rightBottom两个属性（均为Point类的对象），表示一个矩形的左上角和右下角的两个点，并具有相应的构造函数、析构函数。此外，还有getLeftTop()、getRightBottom()方法用于获取相应的左上角点、右下角点，getArea()方法用以获取面积。


## Input
输入有多行。
第一行是一个正整数M，表示后面有M个测试用例。
每个测试用例占一行，包括4个正整数，分别为左上角的横坐标、纵坐标，右下角的横坐标、纵坐标。
注意：
1.请根据输出样例判断两个类中相应方法的书写方法。
2. 假定屏幕的左下角为坐标原点。


## Output
输出见样例。


## Sample Input
```
1
10 10 20 0

```
## Sample Output
```
A point (10, 10) is created!
A point (20, 0) is created!
A rectangle (10, 10) to (20, 0) is created!
Area: 100
Left top is (10, 10)
A point (20, 0) is copied!
A point (20, 0) is copied!
Right bottom is (20, 0)
A point (20, 0) is erased!
A point (20, 0) is erased!
A rectangle (10, 10) to (20, 0) is erased!
A point (20, 0) is erased!
A point (10, 10) is erased!

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases;
    int x1, y1, x2, y2;

    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>x1>>y1>>x2>>y2;
        Rectangle rect(x1,y1,x2,y2);
        cout<<"Area: "<<rect.getArea()<<endl;
        cout<<"Left top is ("<<rect.getLeftTop().getX()<<", "<<rect.getLeftTop().getY()<<")"<<endl;
        cout<<"Right bottom is ("<<rect.getRightBottome().getX()<<", "<<rect.getRightBottome().getY()<<")"<<endl;
    }
    return 0;
}
```
