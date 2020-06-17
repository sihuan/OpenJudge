# 不同交通工具的速度
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
不同交通工具的速度是不同的。针对自行车、摩托车和汽车分别建立类，来模拟这一情况。
定义Vechicle类，是所有交通工具的父类：
1. 属性int speed表示交通工具的一般速度。
2. 静态数据成员int numOfVechicles，表示创建的交通工具的数量。这个值只增不减。
3. 静态成员函数int getNumOfVechicles()，用于获取交通工具的数量。
4. 析构函数。输出“A vechicle is deleted.”
5. 纯虚函数void show().
定义Bike、MotoBike和Car三个类，它们都是Vechicle的子类，且具有：
1. 构造函数。
2. 重写show()函数，输出“A *'s speed is ？ km/h.”，其中“*”是bike、motobike或car，根据所在类不同而不同。“？”是speed属性的值。
3. 析构函数。输出“A * is deleted.”，“*”的含义同上。
定义Person类，表示司机：
1. 数据成员string name，是人的姓名。
2. void drive(Vechicle&)方法，输出“$ drives”， 并调用Vechicle类的show()方法。其中“$”是name的值。


## Input
第1行N>0，表示有N个测试用例。
每个测试用例包括一个不含空白符的字符串、一个字符和一个整数。


## Output
见样例及题目描述。


## Sample Input
```
3
Tom B 15
Jack M 50
Mary C 100

```
## Sample Output
```
In beginning, we have 0 vechicles.
Tom drives. A bike's speed is 15km/h.
A bike is deleted.
A vechicle is deleted.
Jack drives. A motobike's speed is 50km/h.
A motobike is deleted.
A vechicle is deleted.
Mary drives. A car's speed is 100km/h.
A car is deleted.
A vechicle is deleted.
At the end, we have 3 vechicles.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases, n;
    char c;
    string name;
    Vechicle* vechicle;
    cout<<"In beginning, we have "<<Vechicle::getNumOfVechicles()<<" vechicles."<<endl;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>name>>c>>n;
        Person person(name);
        switch (c)
        {
        case 'B':
            vechicle = new Bike(n);
            break;
        case 'M':
            vechicle = new MotoBike(n);
            break;
        case 'C':
            vechicle = new Car(n);
            break;
        }
        person.drive(*vechicle);
        delete vechicle;
    }
    cout<<"At the end, we have "<<Vechicle::getNumOfVechicles()<<" vechicles."<<endl;
    return 0;
}
```
