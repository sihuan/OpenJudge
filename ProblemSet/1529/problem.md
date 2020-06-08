# ons Colors
Time Limit: 3 Sec  Memory Limit: 128 MB


## Description
Assigning a balloon color to each problem is one of the tasks we need to do every year, and sometimes it is tricky.
We noticed that some contestants assume some colors for some problems according to the difficulty. For example, the easiest problem is the red one and the hardest problem is the black one.
We do not want these assumptions to be true, so we decided to add constraints for the easiest and the hardest problems.
There are N problems, numbered from 1 to N, the easiest problem is problem number 1, and the hardest problem is problem number N. Also there are N unique colors, for simplicity we will give each color a unique number from 1 to N.
We want to assign each color to exactly 1 problem, such that the easiest problem does not get the color X and the hardest problem does not get the color Y.
Given N, X, Y and an assignment of the colors, your task is to find if this assignment satisfies the above conditions or not.


## Input
Your program will be tested on one or more test cases. The first line of the input will be a single integer T, the number of test cases (1<=T<=100). Followed by the test cases, the first line of each test case contains 3 integers separated by a single space N X Y (3<=N<=100) and (1<=X, Y<=N) representing the number of problems, the color which the easiest problem should not get and the color which the hardest problem should not get, respectively. Followed by a line which contains N integers separated by a single space (each integer from 1 to N should appear exactly once), the first integer is the color for the first problem (the easiest), the second integer is the color for the second problem and so on (the last integer is the color for the hardest problem).


## Output
For each test case, print a single line which contains a single word, this word should be (without the quotes):
- "BOTH": If both the easiest and hardest problems got colors which they should not get.
- "EASY": If only the easiest problem got a color which it should not get.
- "HARD": If only the hardest problem got a color which it should not get.
- "OKAY": If both the easiest and hardest problems got colors which they can get.


## Sample Input
```
4
3 1 2
1 3 2
5 3 4
3 1 2 4 5
6 1 6
2 1 3 4 5 6
7 7 7
1 7 2 3 4 5 6

```
## Sample Output
```
BOTH
EASY
HARD
OKAY

```

## HINT


## Append Code
