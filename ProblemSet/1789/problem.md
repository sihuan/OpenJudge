# 可变长数组
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个类模板：
template <typename T>
class DataVector
{
private:
    vector<T> members;//表示该数组中的所有元素
public:
    void show();//用于显示所有元素。
    T getSum();//用于求所有元素的和。
    void clearVector();//用以清除所有元素。
    vector<T>& getVector();//用于返回members。
};


## Input
输入为多行，
第一行M>0表示有M个测试用例。
每个测试用例占一行。开始是字母“i"（表示该行是整数数据）或"d"（表示该行是实数数据），一个空格后是一个正整数N>0，表示其后有N个数据，这N个数据 就是构成一个数组的所有元素。


## Output
每行输入产生2行输出：第一行显示所有的元素，两两之间用一个空格隔开，但是首尾不能有空格。第二行显示这些元素的和。


## Sample Input
```
2
i 5 10 20 30 40 50
d 4 1.1 2.1 3.1 4.1

```
## Sample Output
```
10 20 30 40 50
150
1.1 2.1 3.1 4.1
10.40

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases, num, iData;
    double dData;
    DataVector<int> iVector;
    DataVector<double> dVector;
    char type;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>type;
        switch(type)
        {
        case 'i':
            iVector.clearVector();
            cin>>num;
            for (int j = 0; j < num; j++)
            {
                cin>>iData;
                iVector.getVector().push_back(iData);
            }
            iVector.show();
            cout<<iVector.getSum()<<endl;
            break;
        case 'd':
            dVector.clearVector();
            cin>>num;
            for (int j = 0; j < num; j++)
            {
                cin>>dData;
                dVector.getVector().push_back(dData);
            }
            dVector.show();
            cout<<setprecision(2)<<fixed<<dVector.getSum()<<endl;
        }
    }
    return 0;
}
```
