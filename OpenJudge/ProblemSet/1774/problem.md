# 字符类的封装
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
先来个简单习题，练练手吧！现在需要你来编写一个Character类，将char这一基本数据类型进行封装。该类中需要有如下成员函数：
1. 无参构造函数。
2. 构造函数Character(char)：用参数初始化数据成员。
3. void setCharacter(char)：重新设置字符值。
4. int getAsciiCode()：返回字符的ASII码。
5. char getCharacter()：返回字符值。
6. 析构函数。


## Input
输入只有1行，包含一个合法的、可打印的字符。


## Output
输出有好多行，请参考样例来编写相应的函数。


## Sample Input
```
c

```
## Sample Output
```
Default constructor is called!
Character a is created!
ch1 is c and its ASCII code is 99.
ch2 is a and its ASCII code is 97.
Character a is erased!
Character c is erased!

```

## HINT


## Append Code
### append.cc
```cppint main()
{
    char ch;
    Character ch1, ch2('a');
    cin>>ch;
    ch1.setCharacter(ch);
    cout<<"ch1 is "<<ch1.getCharacter()<<" and its ASCII code is "<<ch1.getAsciiCode()<<"."<<endl;
    cout<<"ch2 is "<<ch2.getCharacter()<<" and its ASCII code is "<<ch2.getAsciiCode()<<"."<<endl;
    return 0;
}
```
