# 时间类的输入
Time Limit: 4 Sec  Memory Limit: 128 MB


## Description
封装一个时间类Time，用于时间处理的相关功能，支持以下操作：

1. Time::Time()无参构造方法。
2. Time::inputTime()方法：按格式从标准输入读取数据修改Time对象的时分秒数值。该方法返回修改后的对象。
3. Time::showTime()方法：输出“hh:mm:ss”，不足两位的要前面补0。

你设计一个时间类Time，使得main()函数能够正确运行。

函数调用格式见append.cc。

append.cc中已给出main()函数。



## Input
输入的第一个整数n，表示有n组测试数据，每组3个整数：hh,mm,ss，分别表示时、分、秒，其值都在合法的时间范围内。



## Output
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
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
        t.inputTime().showTime();
}

```
