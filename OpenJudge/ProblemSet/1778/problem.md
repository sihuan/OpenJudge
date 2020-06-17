# 点在圆内吗？
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个Point类和Circle类，用于判断给定的一系列的点是否在给定的圆内。
其中，Point类：
1.有2个成员x和y，分别为其横坐标和纵坐标；1个静态成员numOfPoints，用于计算生成的点的个数。
2.具有构造函数、析构函数和拷贝构造函数，具体格式输出根据样例自行判断。
3. 具有静态方法int getNumOfPoints()，用于返回numOfPoints的值。
4. 具有int getX()和int getY()方法，用于获取横坐标和纵坐标。
Circle类：
1. 拥有Point类的对象center，表示圆心坐标。拥有radius对象，表示圆的半径；1个静态成员numOfCircles，用于指示生成了多少个圆对象。
2. 具有构造函数、析构函数和拷贝构造函数，具体格式根据样例自行判断。
3.具有静态方法int getNumOfCircles()，返回numOfCircles的值。
4. 具有getCenter()方法，返回圆心坐标。注意：根据输出结果判断返回值类型。
5. 具有bool pointInCircle(Point &)方法，用于判断给定的点是否在当前圆内。是则返回true，否则返回false。


## Input
输入分多行。
第一行M>0，表示有M个测试用例。
每个测试用例又包括多行。第1行包含3个整数，分别为一个圆的横坐标、纵坐标和半径。第2行N>0，表示之后又N个点，每个点占一行，分别为其横坐标和纵坐标。
所有输入均为整数，且在int类型范围内。


## Output
输出见样例。注意：在圆的边上的点，不在圆内。


## Sample Input
```
2
0 0 10
3
2 2
11 11
10 0
1 1 20
3
2 2
1 1
100 100

```
## Sample Output
```
The Point (0, 0) is created! Now, we have 1 points.
The Point (1, 1) is created! Now, we have 2 points.
A circle at (1, 1) and radius 1 is created! Now, we have 1 circles.
We have 2 points and 1 circles now.
The Point (0, 0) is created! Now, we have 3 points.
A Point (0, 0) is copied! Now, we have 4 points.
A Point (0, 0) is copied! Now, we have 5 points.
A circle at (0, 0) and radius 10 is created! Now, we have 2 circles.
A Point (0, 0) is erased! Now, we have 4 points.
The Point (2, 2) is created! Now, we have 5 points.
(2, 2) is in the circle at (0, 0).
The Point (11, 11) is created! Now, we have 6 points.
(11, 11) is not in the circle at (0, 0).
The Point (10, 0) is created! Now, we have 7 points.
(10, 0) is not in the circle at (0, 0).
A Point (0, 0) is erased! Now, we have 6 points.
A circle at (0, 0) and radius 10 is erased! Now, we have 1 circles.
A Point (0, 0) is erased! Now, we have 5 points.
The Point (1, 1) is created! Now, we have 6 points.
A Point (1, 1) is copied! Now, we have 7 points.
A Point (1, 1) is copied! Now, we have 8 points.
A circle at (1, 1) and radius 20 is created! Now, we have 2 circles.
A Point (1, 1) is erased! Now, we have 7 points.
The Point (2, 2) is created! Now, we have 8 points.
(2, 2) is in the circle at (1, 1).
The Point (1, 1) is created! Now, we have 9 points.
(1, 1) is in the circle at (1, 1).
The Point (100, 100) is created! Now, we have 10 points.
(100, 100) is not in the circle at (1, 1).
A Point (1, 1) is erased! Now, we have 9 points.
A circle at (1, 1) and radius 20 is erased! Now, we have 1 circles.
A Point (1, 1) is erased! Now, we have 8 points.
We have 8 points, and 1 circles.
A circle at (1, 1) and radius 1 is erased! Now, we have 0 circles.
A Point (1, 1) is erased! Now, we have 7 points.
A Point (0, 0) is erased! Now, we have 6 points.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases,num;
    int x, y, r, px, py;
    Point aPoint(0,0), *bPoint;
    Circle aCircle(1,1,1);
    cin>>cases;
    cout<<"We have "<<Point::getNumOfPoints()<<" points and "<<Circle::getNumOfCircles()<<" circles now."<<endl;
    for (int i = 0; i < cases; i++)
    {
        cin>>x>>y>>r;
        bPoint = new Point(x,y);
        Circle circle(*bPoint, r);
        cin>>num;
        for (int j = 0; j < num; j++)
        {
            cin>>px>>py;
            if (circle.pointInCircle(*(new Point(px, py))))
            {
                cout<<"("<<px<<", "<<py<<") is in the circle at (";
                cout<<circle.getCenter().getX()<<", "<<circle.getCenter().getY()<<")."<<endl;
            }
            else
            {
                cout<<"("<<px<<", "<<py<<") is not in the circle at (";
                cout<<circle.getCenter().getX()<<", "<<circle.getCenter().getY()<<")."<<endl;
            }
        }
        delete bPoint;
    }
    cout<<"We have "<<Point::getNumOfPoints()<<" points, and "<<Circle::getNumOfCircles()<<" circles."<<endl;
    return 0;
}
```
