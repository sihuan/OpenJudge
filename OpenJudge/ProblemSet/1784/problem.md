# 整型数组运算符重载
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Array类：
1.拥有数据成员int length和int *mems，分别是数组中元素的个数和元素列表。
2. 无参构造函数，将mems设置为NULL，length为0。
3. 重载==运算符，用于判断两个Array对象是否相等。相等包括两种情况：（1）两个对象是同一个对象，即它们拥有相同的地址（记住： this指针指向当前对象，是当前对象的地址）；（2）两个对象的length相同，且mems中对应元素的值相同。其他情况均为不相等。
4. 利用友元函数重载<<和>>运算符。输入、输出格式见下。


## Input
输入分多行。
第一行是一个正整数M，表示有M个数组。
每个数组是一行，其中第一个非负整数N表示该数组的元素个数，之后有N个整数。


## Output
输出有M行。
第一行输出即为第一个数组。
自第二行开始，首先输出对应的数组元素（两两之间用空格隔开，首尾不能有空格），如果数组为空，则不输出元素。之后根据这个数组与上个数组是否相同，输出“unequal to above.”（不相等）和“equal to above”（相等）。


## Sample Input
```
5
3 1 2 3
3 1 2 3
0
7 1 2 3 4 5 6 7
7 1 2 3 4 5 6 8

```
## Sample Output
```
1 2 3
1 2 3 equal to above.
 unequal to above.
1 2 3 4 5 6 7 unequal to above.
1 2 3 4 5 6 8 unequal to above.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int cases;
    cin>>cases;
    Array arraies[cases];
    for (int i = 0; i < cases; i++)
    {
        cin>>arraies[i];
    }
    cout<<arraies[0]<<endl;
    for (int i = 1; i < cases; i++)
    {
        if (arraies[i] == arraies[i - 1])
        {
            cout<<arraies[i]<<" "<<"equal to above."<<endl;
        }
        else
        {
            cout<<arraies[i]<<" "<<"unequal to above."<<endl;
        }
    }
    return 0;
}
```
