# 计算机类
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个Computer类，有两个属性：
1. 字符串属性name，用于表示计算机的名字。
2. 静态整型属性cnt，用于记录产生的计算机对象的个数。
至少有如下成员函数：
1. 构造函数和拷贝构造函数以及析构函数。
2. setName(char*)：用于修改当前对象的name属性为形参指定的串，并返回当前对象。
3. print()方法，用于输出当前对象的name属性。
4. getCnt()方法，用于返回cnt的值。

## Input
输入只有一行，是一个不含空白符的字符串。

## Output
见样例。

## Sample Input
```
Jack

```
## Sample Output
```
1:0 computers.
2:2 computer.
Jack
Jack
3:2 computer.

```

## HINT
不得使用string。

## Append Code
### append.cc
```cppint main()
{
    char str[101];
    cout<<"1:"<<Computer::getCnt()<<" computers."<<endl;
    Computer com1("Tom"), com2(com1);
    cout<<"2:"<<com2.getCnt()<<" computer."<<endl;
    cin>>str;
    com2.setName(str).print();
    com2.print();
    cout<<"3:"<<com2.getCnt()<<" computer."<<endl;
    return 0;
}
```
