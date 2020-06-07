# Say Hello Today
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
输出一句话，告诉今天的日期。
补全代码使append.cc的程序能够运行。


## Input
输入三个整数，分别为年月日。


## Output
输出格式见样例。


## Sample Input
```
2013 4 3
```
## Sample Output
```
Hello, today is 2013-4-3.
Hello, today is 2013-4-1.
Hello, today is 2013-1-1.
Hello, today is 2000-1-1.

```

## HINT
试试函数的默认形参。


## Append Code
### append.cc
```cppint main()
{
    int yy, mm, dd;
    cin>>yy>>mm>>dd;
    SayHello(yy, mm, dd);
    SayHello(yy, mm);
    SayHello(yy);
    SayHello();
}

void SayHello(int year, int month, int day)
{
    cout<<"Hello, ";
    cout<<"today is ";
    cout<<year;
    cout<<"-";
    cout<<month;
    cout<<"-";
    cout<<day;
    cout<<".";
    cout<<endl;
}
```
