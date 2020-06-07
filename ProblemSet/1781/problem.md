# 驾驶员与汽车
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
我们知道，目前我国的驾照大致可分为A、B、C三种，其中C证只能开小型客车（货车），B证可开中、小型客车（货车），A证没有限制。现在请定义如下几个类：
1. Automobile：抽象类，具有数据成员double speed，纯虚函数virtual void run() const = 0。
2. 六种车型，即小型车Benz、Buick；中型车Zhongba、Beiqi；以及大型车Dayu、Jianghuai。它们都是Automobile的子类。
3. Driver类，具有string name和char type两个数据成员，前者是司机的名字，后者是司机持有的驾照类型（A、B或C）。提供Drive(Automobile *)方法，根据驾照类型判定该司机是否可以驾驶指定的汽车。


## Input
输入分多行。第一行是一个整数M>0，表示之后有M个测试用例。
每个测试用例包括四部分：司机姓名（不含空白符）、驾照类型（A、B或C）、车型（分别用字母a~f表示六种车型，对应的车型可以从main()中看出）以及该车的行驶速度（double类型范围内的正数）。


## Output
输出共M行，每个测试用例对应一行输入，具体格式参见样例。


## Sample Input
```
4
zhangsan C a 100.33
lisi C d 100.33
wangwu B f 100.33
Tom A e 300.00

```
## Sample Output
```
Driver zhangsan can drive Benz at speed of 100.33km/h.
A Benz is erased!
An automobile is erased!
Driver lisi cannot drive bus.
A Beiqi is erased!
An automobile is erased!
Driver wangwu cannot drive large bus.
A Jianghuai is erased!
An automobile is erased!
Driver Tom can drive Dayu at speed of 300.00km/h.
A Dayu is erased!
An automobile is erased!

```

## HINT
1.使用typeid来判定一个基类指针实际指向的对象的类型。
2.注意：append.cc中已经给出了Driver类的一个方法，不要在Driver类重复定义了。


## Append Code
### append.cc
```cppvoid Driver::Drive(Automobile *automobile)
{
    switch (type)
    {
    case 'A':
        cout<<"Driver "<<name<<" can drive ";
        automobile->run();
        break;
    case 'B':
        if (typeid(*automobile) == typeid(Dayu) || typeid(*automobile) == typeid(Jianghuai))
            cout<<"Driver "<<name<<" cannot drive large bus."<<endl;
        else
        {
            cout<<"Driver "<<name<<" can drive ";
            automobile->run();
        }
        break;
    case 'C':
        if (typeid(*automobile) != typeid(Benz) && typeid(*automobile) != typeid(Buick))
            cout<<"Driver "<<name<<" cannot drive bus."<<endl;
        else
        {
            cout<<"Driver "<<name<<" can drive ";
            automobile->run();
        }
        break;
    }
}
int main()
{
    string name;
    char type;
    double speed;
    char automobileType;
    int cases;
    Automobile *automobile;


    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>name>>type>>automobileType>>speed;
        Driver driver(name, type);
        switch (automobileType)
        {
        case 'a':
            automobile = new Benz(speed);
            break;
        case 'b':
            automobile = new Buick(speed);
            break;
        case 'c':
            automobile = new Zhongba(speed);
            break;
        case 'd':
            automobile = new Beiqi(speed);
            break;
        case 'e':
            automobile = new Dayu(speed);
            break;
        case 'f':
            automobile = new Jianghuai(speed);
            break;
        }
        driver.Drive(automobile);
        delete automobile;
    }
    return 0;
}
```
