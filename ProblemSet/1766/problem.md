# 登录密码验证 之二
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
编写一个程序，模拟用户登录系统的密码验证过程。系统提供给用户的密码长度最长为20个字符，若密码输入错误可以再次输入。但为了保证用户密码安全，若连续输入密码错误超过5次就会锁定账号一段时间。

与此前不同的是，这次系统的密码验证是大小写无关的，也就是说同一个英文字母的大、小写视作相同字符。


## Input
输入为若干个串，至EOF结束。输入的第一个串是用户的正确密码，后面的串为模拟用户登录时的输入的密码。


## Output
每次输入错误的密码，输出一个“Wrong!”，若输入的密码为正确的，输出一个“Welcome!”，并结束密码测试。若前5次输入的密码都是错误的，则后面的输入中不管是否有正确的密码都输出“Out of limited!”。



## Sample Input
```
ABCDEFG
123456 kkkkkkkk abcdefg
```
## Sample Output
```
Wrong!
Wrong!
Welcome!

```

## HINT
