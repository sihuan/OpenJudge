# 编写函数：几点几分几秒 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         一天24小时，每小时60分钟，每分钟60秒。一天共有86400秒。
         你的任务是编写一个程序，输入一个在0～86399之间的整数n，输出n对应的时间（从00:00:00到23:59:59）。
 
         编写两个函数to_time()和put_time()完成程序：
                   原型：struct time to_time(int n);
                   功能：把参数n换算为用结构体time表示的时间。
                   原型：int put_time(struct time t);
                   功能：按格式输出t。
         函数的调用格式见“Append Code”。
 
         “Append Code”中用到如下类型的定义：
                   struct time{
                            int hh; // 时
                            int mm; // 分
                            int ss; //秒

                   } ;


## Input
         输入为若干整数n，表示每天的第n秒，0<=n<=86399，至EOF结束。


## Output
         每行输出一个整数n对应的具体时间，格式为“hh:mm:ss”。时、分、秒各占2位，不足两位要补0，如0点0分0秒为“00:00:00”。


## Sample Input
```
1
2
61
3600
9999
86399

```
## Sample Output
```
00:00:01
00:00:02
00:01:01
01:00:00
02:46:39
23:59:59

```

## HINT


## Append Code
### append.c
```c
int main()
{
    int n;
    struct time tm;
    while(scanf("%d", &n) != EOF)
    {
        tm = to_time(n);
        put_time(tm);
    }
    return 0;
}

```
