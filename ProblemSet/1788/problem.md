# 数量的类模板
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个类模板Data，用于包装C++中的基本数据类型int和double。它包括：
1. 数据成员value为该对象所包装的值。
2. 无参构造函数（初始化value为0）和带参构造函数。
3. 重载的运算符：>、<、+以及<<。其中"+"返回和，不改变两个操作数的值。
4. 成员函数setValue用于设置value的值。
定义另一个类模板GetResult，它只有3个静态成员函数（以下“T"为类型参数）：
1. static Data<T> getSum(Data<T> *arr, int num)：求存储在arr中的num个Data对象的和，并返回由这个和构成的一个Data对象。
2. static Data<T> getMax(Data<T> *arr, int num)：求存储在arr中的num个Data对象的最大值，并返回这个最大值对应的对象。
3.  static Data<T> getMin(Data<T> *arr, int num)：求存储在arr中的num个Data对象的最小值，并返回这个最小值对应的对象。


## Input
输入分多行。
第一行M>0表示有M个测试用例。
只有的M行，每行开始有一个字母i或d，第二个是正整数N>0。如果第一个字母是i，则表示本行包括N个int类型的数据；如果第一个字母为d，则表示本行有N个double类型的数据。


## Output
除前6行输出外，其他输出的行数等于M。其中每一行输出3个数据：对应测试用例的最大值、最小值以及和。实数输出定点小数，且只输出2位小数。


## Sample Input
```
3
i 3 1 2 3
d 3 1.1 2.2 3.3
i 1 10

```
## Sample Output
```
a + b = 30
max(a, b) = 20
min(a, b) = 10
c + d = -0.96
max(c, d) = 3.14
min(c, d) = -4.10
3 1 6
3.30 1.10 6.60
10 10 10

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    Data<int> iData[1001];
    Data<double> dData[1001];
    int cases, num;
    char ch;
    int u;
    double v;
    Data<int> a(10), b(20);
    Data<double> c(3.14), d(-4.1);
    cout<<"a + b = "<<(a + b)<<endl;
    cout<<"max(a, b) = "<<(a > b ? a : b)<<endl;
    cout<<"min(a, b) = "<<(a < b ? a : b)<<endl;
    cout<<"c + d = "<<(c + d)<<endl;
    cout<<"max(c, d) = "<<(c > d ? c : d)<<endl;
    cout<<"min(c, d) = "<<(c < d ? c : d)<<endl;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>ch;
        cin>>num;
        for (int j = 0; j < num; j++)
        {
            if (ch == 'i')
            {
                cin>>u;
                iData[j].setValue(u);
            }
            else if (ch == 'd')
            {
                cin>>v;
                dData[j].setValue(v);
            }
        }
        if (ch == 'i')
        {
            cout<<GetResult<int>::getMax(iData, num);
            cout<<" "<<GetResult<int>::getMin(iData, num);
            cout<<" "<<GetResult<int>::getSum(iData, num)<<endl;
        }
        else if (ch == 'd')
        {
            cout<<GetResult<double>::getMax(dData, num);
            cout<<" "<<GetResult<double>::getMin(dData, num);
            cout<<" "<<GetResult<double>::getSum(dData, num)<<endl;
        }
    }
    return 0;
}

```
