# 闹钟
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义Time类，包括
1. hour、minute、second三个int类型的属性，分别是时间的时、分、秒。
2. 构造函数、析构函数，并在其中输出相应的信息，格式见样例。
3. 其他必要的函数，使程序能正确运行。
定义Alarm类，包括:
1. 1个Time类的对象和1个字符串属性，分别是闹钟的时间和闹钟的名字。
2. 构造函数、析构函数，并在其中输出相应的信息，格式见样例。
3. int remainSeconds(Time& now)方法，用于计算当前时间now距离闹钟事件还有多少秒。假定now一定小于闹钟设定时间。
4. getThing()方法，用于返回闹钟的名字。



## Input
第1行是一个不含空白符的字符串，是闹钟的名字。
第2行和第3行是2个时间，分别是闹钟的时间，和当前时间。



## Output
见样例。


## Sample Input
```
GetUp
10 10 10
9 9 9

```
## Sample Output
```
Time 10:10:10 is created.
Alarm GetUp is created.
Time 9:9:9 is created.
Alarm GetUp will start after 3661 seconds.
Time 9:9:9 is erased.
Alarm GetUp is erased.
Time 10:10:10 is erased.

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int h, m, s;
    string th;
    cin>>th;
    cin>>h>>m>>s;
    Alarm alarm(h,m,s,th);
    cin>>h>>m>>s;
    Time now(h,m,s);
    cout<<"Alarm "<<alarm.getThing()<<" will start after "<<alarm.remainSeconds(now)<<" seconds."<<endl;
    return 0;
}
```
