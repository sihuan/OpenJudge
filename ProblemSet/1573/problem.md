# 数组类（II）
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
封装一个模板数组类，用于存储数组和处理的相关功能，支持以下操作：

1. Array::Array(int l)构造方法：创建一个长度为l的组对象。
2. Array::size()方法：返回Array对象中元素个数。
3. Array::put(int n)方法：按从大到小的顺序输出前n大元素，若数组长度小于n则从大到小输出全部元素。
4. 下标运算符：返回下标所指的元素。

-----------------------------------------------------------------------------

你设计一个模板数组类Array，使得main()函数能够正确运行。

函数调用格式见append.cc。

append.cc中已给出main()函数。



## Input
输入的第一个整数n，表示有n组测试数据。
后面的每行以一个整数k开头，表示后面有k个同类型的数组元素。
数组元素有以下三种类型：整数、浮点数和字符，并且按固定的次序间隔出现。


## Output
把输入的数组，按值从大到小输出前10个元素，若输入不足10个则全部输出。每行数据对应一个输出。格式见sample。



## Sample Input
```
3
10 1 2 3 4 5 6 7 8 9 0
5 1.1 2.2 3.3 4.4 5.5
20 ABCDEGHIJMNPRSTUVWXY

```
## Sample Output
```
9 8 7 6 5 4 3 2 1 0
5.5 4.4 3.3 2.2 1.1
Y X W V U T S R P N

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases, len;
    cin >> cases;
    for(int ca = 1; ca <= cases; ca++)
    {
        cin >> len;
        if(ca % 3 == 0)
        {
            Array<char> chr_arr(len);
            for(int i = 0; i < chr_arr.size(); i++)
                cin >> chr_arr[i];
            chr_arr.put(10);
        }
        if(ca % 3 == 1)
        {
            Array<int> int_arr(len);
            for(int i = 0; i < int_arr.size(); i++)
                cin >> int_arr[i];
            int_arr.put(10);
        }
        if(ca % 3 == 2)
        {
            Array<double> dbl_arr(len);
            for(int i = 0; i < dbl_arr.size(); i++)
                cin >> dbl_arr[i];
            dbl_arr.put(10);
        }
    }
}

```
