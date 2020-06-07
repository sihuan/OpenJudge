# 图形计数与求面积
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义三个类：Shape、Circle和Square，其中Shape为抽象类，包括：
1. 用于记录Shape类及其子类对象（即图形）个数的静态数据成员。
2. 构造函数与析构函数。
3. 获得图形个数的静态成员函数 static int getNumOfShapes()，以及
4. 求图形面积的纯虚函数getArea()。
类Circle是Shape类的子类，包括：
1. 用于记录Circle类对象（即圆）个数的静态数据成员。
2. 表示半径的double类型数据成员。
3. 构造函数和析构函数。
4. 重写的基类函数getArea()，用于求圆的面积，其中圆周率取值为3.14。
5. 用于获得圆个数的静态成员函数static int getNumOfCircles()。
类Square也是Shape类的子类，包括：
1. 用于记录Square类对象（即正方形）个数的静态数据成员。
2. 表示边长的double类型数据成员。
3. 构造函数和析构函数。
4. 重写的基类函数getArea()，用于求正方形的面积。
5. 用于获得正方形个数的静态成员函数static int getNumOfSquares()。
注意：所有用于记录个数的静态成员只增不减。


## Input
第1行N>0，表示有N个测试用例。
每个测试用例分2部分：第1部分是1个字符C或者S，表示产生一个圆或者正方形；第2部分是一个实数，是圆的半径或正方形的边长。



## Output
见样例。
其中面积输出2位小数。


## Sample Input
```
2
C 1.1
S 2.34

```
## Sample Output
```
numOfShapes = 0, numOfCircles = 0, numOfSquares = 0
A shape is created!
A circle is created!
Area = 3.80
A circle is erased!
A shape is erased!
A shape is created!
A square is created!
Area = 5.48
A square is erased!
A shape is erased!
numOfShapes = 2, numOfCircles = 1, numOfSquares = 1

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases;
    char type;
    double data;
    Shape *shape;
    cin>>cases;
    cout<<"numOfShapes = "<<Shape::getNumOfShapes();
    cout<<", numOfCircles = "<<Circle::getNumOfCircles();
    cout<<", numOfSquares = "<<Square::getNumOfSquares()<<endl;
    for (int i = 0; i < cases; i++)
    {
        cin>>type>>data;
        switch(type)
        {
        case 'C':
            shape = new Circle(data);
            break;
        case 'S':
            shape = new Square(data);
            break;
        }
        cout<<"Area = "<<setprecision(2)<<fixed<<shape->getArea()<<endl;
        delete shape;
    }
    cout<<"numOfShapes = "<<Shape::getNumOfShapes();
    cout<<", numOfCircles = "<<Circle::getNumOfCircles();
    cout<<", numOfSquares = "<<Square::getNumOfSquares()<<endl;
}

```
