# Caesar密码
Time Limit: 1 Sec  Memory Limit: 4 MB


## Description
古罗马时，凯撒大帝为了能够确保他与远方的将军之间的通信不被敌人的间谍所获知，发明了Caesar密码。这是一种非常简单的加法替换密码。直到1915年，俄国军队仍在使用Caesar密码，当时军队人员素质不高，稍微复杂一点的密码就很难推广。对于奥地利和普鲁士军队的密码分析家来说，这种密码再简单不过了。

Caesar密码是利用下面的字母映射表进行加密的，第一行是加密前的字母（称作明文），第二行是加密后的字母（称作密文）：


    
        
            明文
            a
            b
            c
            d
            e
            f
            g
            h
            i
            j
            k
            l
            m
            n
            o
            p
            q
            r
            s
            t
            u
            v
            w
            x
            y
            z
        
        
            密文
            D
            E
            F
            G
            H
            I
            J
            K
            L
            M
            N
            O
            P
            Q
            R
            S
            T
            U
            V
            W
            X
            Y
            Z
            A
            B
            C
        
    


容易发现，Caesar密码实际上是把字母表循环左移了3个字母后得到的，我们记作移位为3。

接下来，你要做一个程序，来实现与Caesar密码类似的加密算法。

## Input
 输入为多组数据。以一个整数m开头，后面有m组测试数据。
每组测试数据以两个整数n和k开头，后面接着有n行明文，每行明文总长度不超过10000个字符。只对明文中的大小写英文字母进行加密，其他的符号都忽略。k的取值在-25到26之间，表示密文字母相对明文字母的移位数，正数表示循环左移k个字母、负数表示循环右移k个字母。

## Output
输出的结果与输入的明文顺序一致。每行明文的输出为两部分：先输出一个整数a，表示明文中有a个字符被加密，后面输出一个空格，然后输出密文，密文全部为大写字母，不输出任何其它字符。两组测试数据之间用一个空行分隔。

## Sample Input
```
2
2 3
Love makes man grow up or sink down.
I love you not for who you are, but for who I am before you.

2 -4
Love makes man grow up or sink down.
I love you not for who you are, but for who I am before you.
```
## Sample Output
```
28 ORYHPDNHVPDQJURZXSRUVLQNGRZQ
44 LORYHBRXQRWIRUZKRBRXDUHEXWIRUZKRLDPEHIRUHBRX

28 HKRAIWGAOIWJCNKSQLKNOEJGZKSJ
44 EHKRAUKQJKPBKNSDKUKQWNAXQPBKNSDKEWIXABKNAUKQ
```

## HINT
输入的处理可能会产生一点小的困扰：当读完n和k时，如何去读下一行的字符串？scanf()函数是无法读取回车符号的，能够读出回车符的只有getchar()或gets()这类读取字符的函数。
请注意，用gets()和scanf()判断文件尾的方法是不一样的。