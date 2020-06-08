# 麻烦的女朋友
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
Tom和Mary正在热恋，眼看着天气越来越冷，Mary非常想让Tom给她买件新衣服，既能漂亮还能御寒。可是Tom近来跟兄弟们吃火锅太多，囊中羞涩，所以不想给Mary买，而且Mary已经有了好多件衣服了，衣橱都已满了。你知道的，女朋友最喜欢的永远是商场里没有买来的那件衣服。两个人为了衣服和火锅而发生了争执~~~~~~~
Tom恰好刚学完C语言，突然想起来可以编程来解决这个问题。他首先让Mary给她的每件衣服三个指标：适宜穿着的最低温度lowTem和最高温度highTem以及美丽指数beauty，又让Mary给出一个她所能忍受的最低美丽指数standard。随后，Tom开始每天关注第二天的天气预报，提前知晓第二天早上、中午和晚上的气温curTem（假定是不变的），通过程序计算出Mary在每个时间段应该穿哪件衣服。 计算的规则是：首先挑选出能够在curTem下可以穿的衣服，也就是说，那些lowTem<=curTem<=highTem的衣服。接着从中选出美丽指数beauty最高的衣服。如果这件衣服的beauty<standard，或者没有找到可以在curTem下穿的衣服，那Tom只能悲催地去买新衣服了。如果有，就让Mary穿那件衣服好了！


## Input
输入有多行。
第一行是一个int范围内的整数 ，表示某个时间段的温度。
第二行是一个int范围内的正整数，表示standard。
第三行是一个int范围内的正整数，表示Mary当前拥有的衣服件数N。
之后的N行，每行包含3个int类型范围内的整数，分别是第1至第N件衣服的lowTem、highTem和beauty。



## Output
输出只有一行。
1. 如果能够找到可以穿的衣服，则输出：
Choose # dress.
其中#表示衣服的代号，是[1,N]内的一个数字。
2. 如果没有任何一件衣服能够在当前温度下穿，则输出：


All the dress are inappropriate. Buy new one!

3. 如果有衣服可以在当前温度下穿，但是都达不到Mary所要求的最低标准standard，则输出：
All the dress are ugly. Buy new one!

注意：当确定没有衣服满足条件时，要先判断情况2，再判断情况3。如果有多件衣服满足条件且美丽指数beauty相同，则输出第一个满足条件的衣服编号。



## Sample Input
```
14
80
10
10 14 100
8 12 90
5 10 88
1 8 100
0 9 98
-1 10 76
-4 3 67
-2 -1 57
12 13 99
21 25 100

```
## Sample Output
```
Choose 1 dress.
```

## HINT
