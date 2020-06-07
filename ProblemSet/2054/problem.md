# 类的初体验（V）
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description

定义一个类Data，只有一个int类型的属性和如下方法：
1.   缺省构造函数，将属性初始化为0，并输出"Data's default constructor."。
2.  析构函数，输出："Data # is erased."，其中“#”是属性值。
4.   int getValue()——获得属性值。
5.    void setValue(int)——设置属性值。
定义一个由Data的对象组成的数组类DataArray，该类包括1个int类型的属性和一个Data*类型的属性，分别为数组中元素的个数、所有的元素。定义如下方法：
2. 构造函数——参数格式请参考main函数的调用方法给出，输出："DataArray's constructor."。
3. int getSum()——求所有Data对象属性值的和。
4. 析构函数——输出一行"DataArray's deconstructor."。


## Input
若干个整数。个数大于2个。
第1个N表示后面输入的元素个数。之后有N个整数。它们用于设置main函数中DataArray的对象datas的数组元素值。
最后一个整数用于设置main函数中testP指向的对象的值。

## Output
见样例~

## Sample Input
```
10 1 2 3 4 5 6 7 8 9 10 1222

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
Data's default constructor.
DataArray's constructor.
Sum is 55
Data's default constructor.
Data 1222 is erased.
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
DataArray's deconstructor.
Data 0 is erased.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int i, n;
    Data test, *testP;
    cin>>n;
    int tmp[n];
    for (i = 0; i < n; i++)
        cin>>tmp[i];
    DataArray datas(n, tmp);
    cout<<"Sum is "<<datas.getSum()<<endl;
    testP = new Data;
    cin>>n;
    testP->setValue(n);
    delete testP;
    return 0;
}
```
