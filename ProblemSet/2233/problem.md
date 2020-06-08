# 的深情告白
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
lfh每天都会给wxy发消息,然而lfh有一天闲的蛋疼想用加密消息的方式调戏一下wxy.
lfh让zz告诉wxy了加密方式.
每一条消息仅包含小写字母和空格.我们认为空格的值为0,字母的值对应于其在字母表中的值.(a对应1,z对应26)
加密方式如下:
以"my pie"为例.
    1.求出每一个字母的值的数组[13,25,0,16,9,5].
    2.从第一个元素开始,每一个元素u[i] = u[i-1] + u[i].得到[13,38,38,54,63,68].
    3.将每一个元素对27取余,得到[13,11,11,0,9,14].
    4.最后将其与字母表的顺序值和空格的值对应反编码得到"mkk in".
wxy觉得这个问题实在是太难了,你能帮帮他吗?

## Input
一个字符c和一个字符串~
这个字符c如果是e,那么请加密
如果c是d,请解密
有多组输入
字符串长度不会超过1000

## Output
一个加密或解密后的字符串

## Sample Input
```
e testing multiple letters rrrrrrrrrrrrr
```
## Sample Output
```
tyqjsfmmzteygwhmmycwpulddvmdvmdvmdvmdv

```

## HINT
Append CodeSource#include 
#include 
#include 
#define maxn 100
