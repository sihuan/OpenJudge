# 类的初体验（IV）
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个类Data，只有一个int类型的属性和如下方法：
1.   缺省构造函数，将属性初始化为0，并输出"Data's default constructor."。
2.  带参构造函数，将属性初始化为指定参数，并输出"Data # is created."，其中“#”即参数值。
3. 析构函数，输出："Data # is erased."，其中“#”是属性值。
4.   int getValue()——获得属性值。
5.    void setValue(int)——设置属性值。
定义一个由Data的对象组成的数组类DataArray，包括：
1. 由10个Data类的对象组成的对象数组。
2. 缺省构造函数——不做任何操作，仅输出一行"DataArray's default constructor."。
3. void setValues(int d[10])——设置10个Data的对象的属性值分别为参数d的10个值。
4. int getSum()——求10个Data对象属性值的和。
5. 析构函数——输出一行"DataArray's deconstructor."。

## Input
输入为11个int类型范围内的整数。

## Output
见样例~~~

## Sample Input
```
1 2 3 4 5 6 7 8 9 10 100

```
## Sample Output
```
Data's default constructor.
Data's default constructor.
Data's default constructor.
Data's default constructor.
Data's default constructor.
Data's default constructor.
Data's default constructor.
Data's default constructor.
Data's default constructor.
Data's default constructor.
DataArray's default constructor.
Sum is 55
Data 100 is created.
aData = 100
Data 100 is erased.
DataArray's deconstructor.
Data 10 is erased.
Data 9 is erased.
Data 8 is erased.
Data 7 is erased.
Data 6 is erased.
Data 5 is erased.
Data 4 is erased.
Data 3 is erased.
Data 2 is erased.
Data 1 is erased.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    DataArray dataArray;
    Data *aData;
    int data[10], tmp;
    int i;
    for (i = 0; i < 10; i++){
        cin>>data[i];
    }
    dataArray.setValues(data);
    cout<<"Sum is "<<dataArray.getSum()<<endl;

    cin>>tmp;
    aData = new Data(tmp);
    cout<<"aData = "<<aData->getValue()<<endl;
    delete aData;
    return 0;
}

```
