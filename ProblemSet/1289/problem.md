# 编写函数：是否元音字母？ (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description

判断给定的一个字符是否是元音字母（a,e,i,o,u）？

-----------------------------------------------------------------------------
用C语言实现：append.c中函数原型为
int is_vocals(char c);
功能：若c是元音字母返回1，否则返回0。
用C++实现：append.cc中函数原型为
bool isVocals(char c);
功能：若c是元音字母返回true，否则返回false。
函数的调用格式见“Append Code”。



## Input
输入一个字母。


## Output
如果是一个元音字母，则输出：
It is a vocals.
否则输出：
It is not a vocals.


## Sample Input
```
a
```
## Sample Output
```
It is a vocals.
```

## HINT
参看系统首页上的“Append Code”使用说明，讨论版（Web Board）上也有。


## Append Code
### append.c
```c
int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%s",
            ( is_vocals(ch) ? "It is a vocals."
                            : "It is not a vocals." )
          );
    return 0;
}
```
### append.cc
```cppint main()
{
	char ch;
	cin>>ch;
	if (isVocals(ch))
		cout<<"It is a vocals."<<endl;
	else
		cout<<"It is not a vocals."<<endl;
	return 0;
}
```
