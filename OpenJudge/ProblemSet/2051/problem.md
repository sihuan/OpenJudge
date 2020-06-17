# 好多书啊！
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
每次开学，都要买好多教材，好多好多的money就这样不见了，见了，了，......
我们以教材款的总额来表示我们的伤心度。所以！我们需要首先计算出我们花了多少钱！
定义一个类Book，拥有
1.数据成员name（string类型）和price（double类型）。
2.构造函数（含缺省构造函数）以及析构函数。它们都要输出一行文字，格式见样例（注意输出最后有换行哦）。
3. getName、getPrice、setName、setPrice四个方法，如何定义参照给出的main函数的调用方法。

## Input
输入有3行，每行包括1个字符串（不含空白符）及一个实数，中间用1个空格隔开。

## Output
呃~看样例吧。好复杂的！

## Sample Input
```
C 10
Data 20
Char 30

```
## Sample Output
```
A book C++ is created.
A default book is created.
A default book is created.
A default book is created.
The four books are: C++ C Data Char
Their total price is 102
A book Char is erased.
A book Data is erased.
A book C is erased.
A book C++ is erased.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    Book books[4]={Book("C++", 42.0)};
    string tmp;
    double sum, price;
    int i;
    for (i = 0; i < 3; i++)
    {
        cin>>tmp>>price;
        books[i + 1].setName(tmp);
        books[i + 1].setPrice(price);
    }
    sum = 0;
    for (i = 0; i < 4; i++)
    {
        sum += books[i].getPrice();
    }
    cout<<"The four books are: " << books[0].getName();
    for (i = 1; i < 4; i++)
    {
        cout<<" "<<books[i].getName();
    }
    cout<<endl<<"Their total price is "<<sum<<endl;
    return 0;
}
```
