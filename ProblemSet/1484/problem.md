# 系列故事之——奇葩的电话号码
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
在qtech里，有个ACMer，叫xiaopengyou，他用着一台坚硬的NOKIA手机，就因为如此，NOKIA不幸被ms给收购了。。。T_T，xiaopengyou感觉对不起NOKIA，于是他决定办理买一些NOKIA，然后办理几个手机号码。在买手机的时候很顺利，但是在办理号码的时候，xiaopengyou遇到了一些麻烦。
问题是这样的，一个号码有可能是另一个号码的前缀，假设号码A是号码B的前缀，那么我们想要给B打电话，只能打到A那里去，打不到B那里。所以要我们帮一下xiaopengyou，看看他的号码是否存在这样的问题。


## Input
有多组测试数据。
第一行有个数n，表示每组测试数据有几个号码。(0 < n < 1001)
接下来的n行，每行表示一个号码,号码长度不会超过10.
当输入n为0的时候，结束输入。



## Output
对于每一组测试数据，如果号码两两均不冲突，则输出YES，否则输出NO。



## Sample Input
```
2
012
012345
2
12
012345
0

```
## Sample Output
```
NO
YES

```

## HINT


## Append Code
Source