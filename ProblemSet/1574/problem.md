# 时间和日期类（I）
Time Limit: 4 Sec  Memory Limit: 128 MB


## Description
设计一个时间类和一个日期类，用于读取输入的数据，按格式输出日期和时间。

设计日期类Date需支持以下操作：
Date::Date(int,int,int)构造方法：传入的参数依次为年月日，用参数将日期初始化。
Date::showDate()按格式输出Date对象。

设计时间类Time需支持以下操作：
Time::Time(int,int,int)构造方法：传入的参数依次为时分秒，用参数将时间初始化。
Time::showTime()按格式输出Time对象。

-----------------------------------------------------------------------------

你设计Date类和Time类，使得main()函数能够正确运行。

函数调用格式见append.cc。

append.cc中已给出main()函数。


## Input
输入的第一个整数n，表示有n组测试数据。
后面的输入每行为一组测试数据。每组测试数据的前3个整数是日期的年月日，后3个整数是时间的时分秒。



## Output
每组测试数据对应一行输出。日期的输出格式为“yyyy-mm-dd”，时间的输出格式为“hh:mm:ss”，中间用一个空格分开。



## Sample Input
```
3
1982 10 1 0 0 0
2000 2 28 23 59 59
2014 7 2 13 30 01

```
## Sample Output
```
1982-10-01 00:00:00
2000-02-28 23:59:59
2014-07-02 13:30:01

```

## HINT
输出格式用头文件<iomanip>中流操作算子：
setw(w)   ：设置数据的输出宽度为w个字符
setfill(c)：设置用字符c作为填充字符


## Append Code
### append.cc
```cppint main()
{
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        Date date(year, month, day);
        date.showDate();
        cout << " ";
        int hour, minute, second;
        cin >> hour >> minute >> second;
        Time time(hour, minute, second);
        time.showTime();
        cout << endl;
    }
}

```
