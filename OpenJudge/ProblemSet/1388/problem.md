# 时间类的拷贝和整体读写
Time Limit: 4 Sec  Memory Limit: 128 MB


## Description
封装一个时间类Time，用于时间处理的相关功能，支持以下操作：

1. Time::Time()无参构造方法。
2. Time::Time(int,int,int)构造方法：传递时分秒的三个参数构造对象。
3. Time::Time(const T&)拷贝构造方法。拷贝构造函数调用时输出“There was a call to the copy constructor : h,m,s”，“h,m,s”为所构造对象的时分秒数值，无需补0。
4. 对象整体读写方法：
   Time::setTime(int,int,int)方法：传递时分秒三个参数修改Time对象的时分秒数。该方法返回修改后的对象。
   Time::setTime(const T&)方法：传递一个参数修改Time对象的时分秒数。该方法返回修改后的对象。
   Time::getTime()方法：返回对象自身的引用。其实，t.getTime()即t。
   仅在Time类中的Time::getTime()方法实在是多余，在组合或者继承关系时才会有机会用到。
5. Time::showTime()方法：输出“hh:mm:ss”，不足两位的要前面补0。

注意：在用Time对象传递参数时应传对象的引用而不是直接传对象，返回对象时同样返回引用，以免产生多余的对象拷贝。

你设计一个时间类Time，使得main()函数能够正确运行。

函数调用格式见append.cc。

append.cc中已给出main()函数。main()函数内容稍微繁复，仅为测试对象的各种调用情况。



## Input
输入的第一个整数n，表示有n组测试数据，每组3个整数：hh,mm,ss，分别表示时、分、秒，其值都在合法的时间范围内。



## Output
开始部分为由main()函数产生的固定输出，用于测试对象的某些方法的调用情况。输出“Test data output :”之后为测试数据对应的输出：

每组测试数据对应一组输出“hh:mm:ss”，不足两位的输出需要前面补0，格式见sample。



## Sample Input
```
5
0 0 1
0 59 59
1 1 1
23 0 0
23 59 59
```
## Sample Output
```
Copy constructor test output :
There was a call to the copy constructor : 0,0,0
There was a call to the copy constructor : 1,2,3

Test data output :
00:00:01
00:59:59
01:01:01
23:00:00
23:59:59

```

## HINT
输出格式用头文件<iomanip>中流操作算子：
setw(w)   ：设置数据的输出宽度为w个字符
setfill(c)：设置用字符c作为填充字符


## Append Code
### append.cc
```cpp
int main()
{
    cout<<"Copy constructor test output :"<<endl;
    Time t;
    Time tt(t);
    Time ttt(1, 2, 3);
    Time tttt(ttt.getTime());
    cout<<"\nTest data output :"<<endl;

    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 2 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 2 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            t.setTime(tt).showTime();
        }
    }
}

```
