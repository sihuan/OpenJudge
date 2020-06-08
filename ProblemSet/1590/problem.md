# ry
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
Small W is playing a summary game. Firstly, He takes N numbers. Secondly he takes out every pair of them and add this two numbers, thus he can get N*(N - 1)/2 new numbers. Thirdly he deletes the repeated number of the new numbers. Finally he gets the sum of the left numbers. Now small W want you to tell him what is the final sum.


## Input
Multi test cases, every case occupies two lines, the first line contain n, then second line contain n numbers a1, a2, ……an separated by exact one space. Process to the end of file.
[Technical Specification]
2 <= n <= 100
-1000000000 <= ai <= 1000000000


## Output
For each case, output the final sum.


## Sample Input
```
4
1 2 3 4
2
5 5
```
## Sample Output
```
25
10
```

## HINT
Firstly small W takes any pair of 1 2 3 4 and add them, he will get 3 4 5 5 6 7. Then he deletes the repeated numbers, he will get 3 4 5 6 7, Finally he gets the sum=3+4+5+6+7=25.


## Append Code
Source