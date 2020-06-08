# 
Time Limit: 3 Sec  Memory Limit: 128 MB


## Description
我们的新网站具有了全新的搜索功能，使用了2个通配符“*”和“？”，其中“*”表示0或者多个小写字母，“？”代表1个字母。
当我们输入一个关键字的时候，我们在不确定的地方就使用通配符。我们在数据库里面有多条记录，每条记录都是由小写字母组成，现在给出一个关键字，你能告诉我数据库里面有多少条与关键字相匹配的记录吗？
例如： 如果关键字是j*y*m*y?，那么jiyanmoyu，jyanmoyu，jymyu都是相匹配的记录。


## Input
第一行输入一个T（T≤20），表示有T组测试数据。对于每组测试数据，第一行是输入的关键字，接下是数据库里面的所有记录的条数n，1≤n≤10000,每条记录的长度不超过50个小写字母。


## Output
对于每组测试数据，输出与关键字相匹配的总记录条数，占一行。


## Sample Input
```
2
jiyanmoyu
2
jiyanmoyu
huyanluanyu
ji*moy?
3
jiyanmoyu
jimoyu
huyanluanyu

```
## Sample Output
```
1
2

```

## HINT


## Append Code
