# 线性表的基本操作
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
线性表是一类重要的且基础的数据结构。请定义MyList类，来模拟针对线性表的插入、删除等操作：
1. 数据成员int *elements：线性表元素。
2. 数据成员int len：线性表容量，即线性表的最大长度。
3. 数据成员int curLen：线性表的当前容量，即当前拥有的元素个数。
4. 构造函数MyList(int _len)：构造最大容量为_len的线性表。
5. void append(int d)：在线性表的末尾追加元素d。
6. void insert(int p, int d)：在线性表的第p个位置（0<=p<curLen）插入元素d。
7. void erase(int p)：删除线性表的第p个位置（0<=p<curLen）上的元素。
8. void set(int p, int d)：设置线性表的第p个位置（0<=p<curLen）元素为d。
9. void show()：显示当前线性表的所有元素。输出时，两两之间用一个空格隔开，首尾不能有空格。
上述“p”是指下标，从0开始计算。


## Input
第1行的整数N>0，表示线性表的最大容量。
第2行的整数M>0，表示之后有M个操作。
每个操作的类型用字母A、I、E、S分别表示追加、插入、擦除和设置。
如果操作是A，则之后输入追加的元素值。
如果操作是I，则之后输入插入的位置及元素值。
如果操作是E，则之后输入擦除的位置。
如果操作是S，则之后输入设置的位置及元素值。
所有输入均在针对线性表的合法操作范围内。


## Output
每次操作后，输出线性表的所有元素。


## Sample Input
```
10
10
A 1
A 2
A 3
A 4
A 5
A 6
A 7
I 3 10
E 6
S 1 15

```
## Sample Output
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
1 2 3 10 4 5 6 7
1 2 3 10 4 5 7
1 15 3 10 4 5 7

```

## HINT
不能使用vector、set等容器。


## Append Code
### append.cc
```cppint main()
{
    int cases, len, data, pos;
    char op;
    cin>>len;
    MyList myList(len);
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>op;
        switch (op)
        {
        case 'A':
            cin>>data;
            myList.append(data);
            break;
        case 'I':
            cin>>pos>>data;
            myList.insert(pos, data);
            break;
        case 'E':
            cin>>pos;
            myList.erase(pos);
            break;
        case 'S':
            cin>>pos>>data;
            myList.set(pos, data);
        }
        myList.show();
    }
    return 0;
}
```
