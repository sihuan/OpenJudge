# 数组类（I）
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
封装一个整型数组类，用于存储整数和处理的相关功能，支持以下操作：

1. Array::Array()无参构造方法：创建一个空数组对象。
2. Array::size()方法：返回Array对象中元素个数。
3. Array::get(int n)方法：按格式从输入读取n元素。
4. 下标运算符：返回下标所指的元素。

-----------------------------------------------------------------------------

你设计一个数组类Array，使得main()函数能够正确运行。

函数调用格式见append.cc。

append.cc中已给出main()函数


## Input
输入的第一个整数n，表示有n组测试数据。
后面的每行以一个整数k开头，表示后面有k个整数。



## Output
把输入的数组，输出出来。每行数据对应一个输出。格式见sample。



## Sample Input
```
4
2 10 20
1 0
0
3 1 2 3

```
## Sample Output
```
10 20
0

1 2 3

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases;
    Array arr;
    cin >> cases;
    for(int ca = 1; ca <= cases; ca++)
    {
        int len;
        cin >> len;
        arr.get(len);
        for(int i = 0; i < arr.size(); i++)
            if(i + 1 == arr.size())
                cout << arr[i];
            else
                cout << arr[i] << " ";
        cout << endl;
    }
}

```
