# resent
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
   In the ACM International Collegiate Programming Contest, each team consist of three students. And the teams are given 5 hours to solve between 8 and 12 programming problems. 

   In SDUST, there is programming contest, too. Each team consist of 3 students. The teams are given 5 hours to solve 11 programming problems. Each team can use only one computer, and they can cooperate to solve a problem.  As you know, if there is a junior partner who solves a problem, the others who is in this team are very happy. now,  K,G,J is in a team, if G solve a problems, K may say "G is 666666" or 
J may say "23333, K is a doubi", And G say "K is a 2B23333".

   In these words ("G is 666666","23333, K is a doubi","K is a 2B23333"), there are many integers in these words. If I let the integers regroup and every digit only  appears only once. Can you help me find 
 the minimum values and the maximum value when I let the integers regroup. For example, "23333, K is a doubi", there are two kinds of digits which is 2 and 3. So after I let the integers regroup, the minimum values is 23 and the maximum value is 32.

   Now, you have to help us to find a strategy to minimum the expected number and maximize the expected number of correctly solved problems.


## Input
   The first line of the input is T (1 ≤ T ≤ 20), which stands for the number of test cases you need to solve.

   The next t line of each case contains a string s, whose length is len (len >= 0 && len <= 1000), 


## Output
For each test case, print a line “Case t : Min Max”(without quotes, t means the index of the test case, Min and Max is the minimum values and the maximum value when I let the integers regroup).If no digits in the string, you can let the Min and Max is -1.


## Sample Input
```
4
do you think K is a doubi? 1 is yes
doubi doubi doubi 23333333333
we are the ACMers, we are on the way. 52 ACM!!!!!!!
We love laowu! 233333  66666666
```
## Sample Output
```
Case 1 : 1 1
Case 2 : 23 32
Case 3 : 25 52
Case 4 : 236 632

```

## HINT
There's no "0" at the beginning of the output if the answer contains not only "0". For example, output like "012" does not exist.
You need use all digits which appeared in the input.

## Append Code
Source