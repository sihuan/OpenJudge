# 正方形、长方形、立方体
Time Limit: 3 Sec  Memory Limit: 128 MB


## Description
给出正方形（Square）、长方形（Rectangle）、立方体（Cuboid）的边长，求周长、面积、体积。

Square类只需存一条边长，构造函数产生一条输出，有边长、周长、面积的函数。

Rectangle类需存长和宽，若从Square类派生而来，因此只需增加一条边，构造函数产生一条输出，有长、宽、周长、面积的函数。

Cuboid类需存长宽高，若从Rectangle类派生而来，因此也只增加一条边，构造函数产生一条输出，有长、宽、高、周长、面积、体积的函数。它的周长定义为所有棱长之和。

-----------------------------------------------------------------------------

请仔细阅读append.cc代码，并设计好正方形、长方形、立方体派生关系，使main()函数能够运行并得到正确的输出。



## Input
输入分为三部分，每一部分都已一个整数n开始，表示后面有n组测试数据。

在第一部分测试数据中，每组是一个整数，表示正方形的边长。

在第二部分测试数据中，每组是两个整数，表示长方形的长和宽。

在第三部分测试数据中，每组是三个整数， 表示立方体的长和宽。



## Output
每组测试数据对应的输出为两部分，前面是构造函数的输出，最后是输出图形的信息，包括长宽高、周长、面积、体积等信息，格式见sample；


## Sample Input
```
1
4
1
3 4
1
3 4 6
```
## Sample Output
```
Construct Square (4)
A Square length 4, Perimeter 16, Area 16
=========================
Construct Square (3)
Construct Rectangle (3, 4)
A Rectangle length 3, width 4, Perimeter 14, Area 12
=========================
Construct Square (3)
Construct Rectangle (3, 4)
Construct Cuboid (3, 4, 6)
A Cuboid length 3, width 4, height 6, Perimeter 52, Area 108, Volume 72

```

## HINT


## Append Code
### append.c
```c#include <stdio.h>
   
int mian()
{
    printf("请勿提交C语言代码");
}
```
### append.cc
```cppint main()
{
    int cases, l, w, h;
    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> l;
        Square squa(l);
        cout << "A Square length " << squa.length() << ", ";
        cout << "Perimeter " << squa.perimeter() << ", ";
        cout << "Area " << squa.area() << endl;
    }

    cout << "=========================" << endl;

    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> l >> w;
        Rectangle rect(l, w);
        cout << "A Rectangle length " << rect.length() << ", width " << rect.width() << ", ";
        cout << "Perimeter " << rect.perimeter() << ", ";
        cout << "Area " << rect.area() << endl;
    }

    cout << "=========================" << endl;

    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> l >> w >> h;
        Cuboid cubo(l, w, h);
        cout << "A Cuboid length " << cubo.length() << ", width " << cubo.width() << ", height " << cubo.height() << ", ";
        cout << "Perimeter " << cubo.perimeter() << ", ";
        cout << "Area " << cubo.area() << ", ";
        cout << "Volume " << cubo.volume() << endl;
    }

}

```
