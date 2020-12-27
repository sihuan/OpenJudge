# lfh的深情告白(二)
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
lfh每天都会给wxy发消息，双十一的这一天，lfh又闲的蛋疼想用加密消息的方式调戏一下wxy。
lfh又让队友zz告诉wxy了加密方式。
lfh会先决定好列的数量，把想说的话从上至下依次填入各列，并在末尾随机填充一些字母，使加密后的信息成为一个完整的矩阵。然后再根据矩阵，先从左至右写下第一行，再从右至左写下第二行，再从左至右写下第三行……就这样把横着的一行一行拼接起来，形成新的加密字符串。为了减小解密难度，lfh把标点符号都去掉了，而且加密的字符串只由小写英文字母组成。
如：lfh写下了一句情话：“At the touch of love, everyone becomes a poet.”（每一个沐浴在爱河中的人都是诗人），她决定把这句情话写成六列

    
        
            
            a
            
            
            o
            
            
            l
            
            
            e
            
            
            b
            
            
            s
            
        
        
            
            t
            
            
            u
            
            
            o
            
            
            r
            
            
            e
            
            
            a
            
        
        
            
            t
            
            
            c
            
            
            v
            
            
            y
            
            
            c
            
            
            p
            
        
        
            
            h
            
            
            h
            
            
            e
            
            
            o
            
            
            o
            
            
            o
            
        
        
            
            e
            
            
            o
            
            
            e
            
            
            n
            
            
            m
            
            
            e
            
        
        
            
            t
            
            
            f
            
            
            v
            
            
            e
            
            
            e
            
            
            t
            
        
    

然后按照从左至右，从右至左，从左至右……这样一行一行写下来，加密后的信息为：“aolebsaerouttcvycpoooehheoenmeteevft”

wxy有点头疼，他想知道lfh给他写的情话究竟是什么，你能再帮帮他吗？




## Input
第一行包含一个整数n( 2 ≤ n ≤ 20 )，表示所使用的列数
第二行是一个长度不超过200的加密字符串（只包含小写字母）
保证输入合法



## Output
输出一行，表示原始信息
每一个答案之后有一个空行



## Sample Input
```
6
aolebsaerouttcvycpoooehheoenmeteevft
3
holeuapbvelpyenxed

```
## Sample Output
```
atthetouchofloveeveryonebecomesapoet

happydoubleelevenx
```

## HINT
样例2中，lfh用一个字母“x”填充信息使得信息成为了一个完整的矩阵（当然她用其他的小写字母也是可以哒）
为了减小解密难度，答案输出的时候把多余的用来填充的字母一并输出即可～
hol
aue
pbv
ple
yen
dex
