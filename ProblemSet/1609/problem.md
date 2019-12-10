# 编写函数：第几个英文字母 (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

         输入一个英文字母，大小写均可，是第几个英文字母？
 
         编写两个函数chseq()、output()，完成程序，其原型为：
                   int chseq(char ch);
                   功能：形参ch传入一个英文字母，大小写均可。用int类型返回其顺序。
                   Output(char ch, int n);
                   功能：输出字母ch是第几个英文字母。

         函数的调用格式见“Append Code”。




## Input

输入为一个英文字母ch，大小写均有可能。




## Output

         输出为：“ch is ??? character.”。其中“???”表示序数（第几个）。
         在序数k（第k个）中：个位数为1的是“st”结尾，为2的是“nd”结尾，为3的是“rd”结尾，为4～9和0的都是“th”结尾。

         例如：“a is 1st character.”、”B is 2nd character.”等等。




## Sample Input
```
C
```
## Sample Output
```
C is 3rd character.

```

## HINT


## Append Code
### append.c
```c
int main()
{
    char ch = getchar();
    int n = chseq(ch);
    output(ch, n);
}

```
### append.cc
```cpp
int main()
{
    char ch = getchar();
    int n = chseq(ch);
    output(ch, n);
}

```
