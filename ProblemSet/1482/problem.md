# 系列故事之——11.11
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
传说中的11月11日！想必你也知道是什么日子吧！就是大名鼎鼎的光棍节啦！qtech的ACMer们，绝大部分人自然也中枪了！但是，有一个很古老的传说！就是说，在11月11日这天，如果你还是光棍！那么你就刷11道题！来年一定会脱光的！（脱离光棍，大家不要误解）
671coder是qtech的一名弱菜，他听信了这个古老的传说！于是他打开的qtech的OJ，找到了当天的judge status，他想知道明年这个时候谁可以脱光！
（judge status有很多种，当然不是每次都会ac的哦！可能会出现的结果有：wa、tle、re、ce、pe、ole、mle……Author之间可以保证是没有空格的）



## Input
输入有多组数据
首先输入一个数n，代表有11月11日这天有n个提交的judge。(n<=30)
接着跟着n行，每行有4个元素组成，第一个是Author，第二个是Problem ID，第三个是time，第四个是judge status。要注意的是：有人为了骗脱光，可能会同一题目AC好几次。其实这也是不算的。还有的想在24点之前结束提交，但是不慎到了第二天的0点多才ac，这些都是不计算的。



## Output
输出来年可以脱光的Author，如果没有人脱光，那么则输出”NULL”。如果有多个人脱光，谁先ac11道题就先输出谁。（可以保证测试数据的输入是么按照实际顺序输入的，如果有同时ac11道题的，先输入的Author先输出）



## Sample Input
```
29
671coder	1001	2013-11-11 05:30:07	Accepted
671coder	1002	2013-11-11 05:30:08	Accepted
671coder	1003	2013-11-11 05:30:09	Accepted
xindoo		1001	2013-11-11 11:00:00	Wrong Answer
xindoo		1001	2013-11-11 11:00:01	Time Limit Exceeded
xindoo		1002	2013-11-11 11:00:02	Runtime Error
671coder	1004	2013-11-11 11:30:10	Accepted
671coder	1005	2013-11-11 11:30:11	Accepted
671coder	1006	2013-11-11 11:30:12	Accepted
xindoo		1001	2013-11-11 12:00:03	Compilation Error
xindoo		1002	2013-11-11 12:00:04	Output Limit Exceeded
xindoo		1001	2013-11-11 12:00:05	Presentation Error
xindoo		1002	2013-11-11 12:00:06	Wrong Answer
671coder	1007	2013-11-11 15:30:08	Accepted
671coder	1008	2013-11-11 15:30:09	Accepted
671coder	1009	2013-11-11 15:30:10	Accepted
xindoo		1001	2013-11-11 15:30:10	Accepted
xindoo		1002	2013-11-11 15:30:11	Accepted
xindoo		1003	2013-11-11 15:30:12	Accepted
xindoo		1004	2013-11-11 15:30:13	Accepted
xindoo		1005	2013-11-11 15:30:14	Accepted
xindoo		1006	2013-11-11 15:30:15	Accepted
xindoo		1007	2013-11-11 15:30:16	Accepted
xindoo		1008	2013-11-11 15:30:17	Accepted
xindoo		1009	2013-11-11 15:30:18	Accepted
xindoo		1010	2013-11-11 15:30:19	Accepted
671coder	1010	2013-11-11 23:59:58	Accepted
671coder	1011	2013-11-11 23:59:59	Accepted
xindoo		1011	2013-11-12 00:00:01	Accepted
```
## Sample Output
```
671coder
```

## HINT


## Append Code
Source