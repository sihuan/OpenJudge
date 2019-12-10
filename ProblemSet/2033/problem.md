# 编写函数：日期的输入与输出 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

输入三个整数表示的年、月、日；按日期的格式输出。
============================================================== 
         定义结构体类型DATE，包含三个分量（字段），用以存储年、月、日。
         编写两个函数getDate()和putDate()来完成本题求一个串的拷贝：
                   原型：int getDate(DATE *d);
                   功能：把输入的日期存储到d中。
                   原型：int putDate(DATE d);
                   功能：把日期d按格式输出到屏幕上。
         函数的调用格式见“Append Code”。



## Input
三个整数，分别是年、月、日。所有输入均为合法输入，且年份不超过4位数。


## Output
按照格式为yyyy-mm-dd格式输出日期，即：年份用4位数，月份、日子用2位数，且两两之间用一个短划线隔开。


## Sample Input
```
2009 10 1
```
## Sample Output
```
2009-10-01
```

## HINT
%0nd作为格式控制符时，与%nd类似，只不过用0填充不足n的部分，而不是用空格。n是一个正整数。


## Append Code
### append.c
```cint main()
{
    DATE date;
    getDate(&date);
    putDate(date);
    return 0;
}
```
