# 短信计费
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
现有手机短信服务商提供如下服务：每条短信长度限定在1～30个字符之内，客户每次发送的信息最多不超过500个字符，信息中每30个字符计算为1条短信，每月月租1元包15条短信，超过15条每条短信收费0.1元，（字符数为0的）空信息不计费。
现给出客户一个月发送的全部短信，编程计算出客户花费（含月租费）。


## Input
输入为多行，至EOF结束。每行为一条信息（可能是多条短信），除了换行符“\n”之外，其他字符都是信息的内容。


## Output
输出客户本月花费，精确到小数点后1位。


## Sample Input
```
Who is that girl?
Where?
Over there,under the big tree.
Oh, that's my sister.She often takes a light blue blouse and a pink skirk.
What's on her hair?
It's an accessory.
What colour is it?
It's pink.She likes pink very much.
How do you like your sister?
She is cute and lovely,and she works hard.
I got a ticket yesterday.
You ran a red light.
He nearly ran into the bus.
Don't take it to heart. You'll never happen again.
Take it easy. There must be some ways to compensate for it.
Don't be so upset. Everything will be OK.
It's really hard for you.
Thank you!It won't happen again.

```
## Sample Output
```
2.1
```

## HINT
