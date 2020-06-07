# STL——哈哈型自动机
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
Xiaoxing发明了一个哈哈型自动机，该自动机能够同时处理n个队列。其中，队列的编号为1..n。给定m个操作，模拟该自动机的工作状态。
第一行有2个整数n,m（1≤n, m≤10,000），表示自动机能处理n个队列，接下来m行每行一条操作指令。
每条指令的格式如下： 

    
        
            
            指令
            
            
            指令说明
            
        
        
            
            INIT
            
            
            将自动机初始化，此时所有的队列清空。
            
        
        
            
            PUSH id val
            
            
            把整数val加入到编号id的队列的尾部。
            
        
        
            
            POP id
            
            
            输出并删除编号id的队列的队首元素，如果队列为空，则输出“NULL”。
            
        
    

 
在每条指令中，id的编号在1..n中，val的取值范围为-231~231。输入数据保证操作的第一条指令都是是INIT。


## Input
本题有多组输入数据，你必须处理到EOF为止。


## Output
请对输入数据中每条POP指令的结果依次输出一行结果。


## Sample Input
```
3 12
INIT
PUSH 1 100
POP 2
PUSH 3 300
PUSH 1 200
PUSH 2 -5
POP 2
PUSH 2 -10
POP 1
INIT
PUSH 1 7
POP 1

```
## Sample Output
```
NULL
-5
100
7

```

## HINT

STL中的queue容器。
关于队列的知识；
使用queue之前，要先利用构造函数一个队列对象，才可以进行元素的入队，出队，取队首和队尾等操作；
（1）.queue（） queue<int> q； 或者 queue<int>Q[10000];
 (2).queue(const queue&) 复制构造函数
 例如：用一行代码利用queue对象q1，创建一个以双向链表为底层容器的queue对象q2
queue<int,list<int>>q1;
queue<int,list<int>>q2(q1);
(3).元素入队 函数为：push（）例如：q.push(3),意思是将3入队 ,注意队列的大小不预设
（4）.元素出队 函数为：pop（）例如：q.pop()
(5)。取对头元素  函数为：front()
(6)，取队尾元素  函数为：back()
(7)。判断对空  函数为:empty()
(8)。队列的大小  函数为：size（）返回队列的当前元素的个数

