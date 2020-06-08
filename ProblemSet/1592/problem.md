# the Array
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
Being a programmer, you like arrays a lot. For your birthday, your friends have given you an array a consisting of n distinct integers.

Unfortunately, the size of a is too small. You want a bigger array! Your friends agree to give you a bigger array, but only if you are able to answer the following question correctly: is it possible to sort the array a (in increasing order) by reversing exactly one segment of a? See definitions of segment and reversing in the notes.


## Input
The input consists of multiple test cases.

The first line of the input contains an integer n (1≤n≤10^3) — the size of array a.

The second line contains n distinct space-separated integers: a[1],a[2],...,a[n] (1≤a[i]≤10^9).


## Output
Print "yes" or "no" (without quotes), depending on the answer.

If your answer is "yes", then also print two space-separated integers denoting start and 

end (start must not be greater than end) indices of the segment to be reversed. If there 

are multiple ways of selecting these indices, print any of them.


## Sample Input
```
3
3 2 1
4
2 1 3 4
4
3 1 2 4
2
1 2
```
## Sample Output
```
yes
1 3
yes
1 2
no
yes
1 1
```

## HINT


## Append Code
Source