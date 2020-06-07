# 给我一台计算机吧！
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
CPU主频和主存容量是衡量一台计算机性能主要指标。请定义：
1. CPU类：只有一个int类型的数据成员以表示其主频，并请根据输出和给定的main()函数编写必要的成员函数（包括构造函数）。
2. Memory类：只有一个int类型的数据成员以表示其容量，并请根据输出和给定的main()函数编写必要的成员函数（包括构造函数）。
3. Computer类：
（1）三个数据成员分别为CPU的对象、Memory的对象和一个字符串（表示该计算机属于谁的）。
（2）根据输出和给定的main()函数编写必要的成员函数（包括构造函数）。
（3）void show()方法，用于按照样例输出格式输出该计算机的信息。


## Input
输入有2行。每行包括2个整数和1个字符串，分别表示CPU的主频、内存容量和计算机主人姓名。


## Output
见样例。


## Sample Input
```
2 1000 Zhang
4 2000 Li

```
## Sample Output
```
This is Zhang' computer with CPU = 2GHz, memory = 1000MB.
This is Li' computer with CPU = 4GHz, memory = 2000MB.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int c, m;
    string n;
    cin>>c>>m>>n;
    CPU cpu(c);
    Memory mem(m);
    Computer com1(cpu, mem, n);
    cin>>c>>m>>n;
    Computer com2(c, m, n);
    com1.show();
    com2.show();
    return 0;
}
```
