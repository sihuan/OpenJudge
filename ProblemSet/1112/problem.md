# ency
Time Limit: 2 Sec  Memory Limit: 64 MB


## Description

Kudo’s real name is not Kudo. Her name is Kudryavka Anatolyevna Strugatskia, and Kudo is only her nickname.
Now, she is facing an emergency in her hometown:
Her mother is developing a new kind of spacecraft. This plan costs enormous energy but finally failed. What’s more, because of the failed project, the government doesn’t have enough resource take measure to the rising sea levels caused by global warming, lead to an island flooded by the sea.
Dissatisfied with her mother’s spacecraft and the government, civil war has broken out. The foe wants to arrest the spacecraft project’s participants and the “Chief criminal” – Kudo’s mother – Doctor T’s family.
At the beginning of the war, all the cities are occupied by the foe. But as time goes by, the cities recaptured one by one.
To prevent from the foe’s arrest and boost morale, Kudo and some other people have to distract from a city to another. Although they can use some other means to transport, the most convenient way is using the inter-city roads. Assuming the city as a node and an inter-city road as an edge, you can treat the map as a weighted directed multigraph. An inter-city road is available if both its endpoint is recaptured.
Here comes the problem.
Given the traffic map, and the recaptured situation, can you tell Kudo what’s the shortest path from one city to another only passing the recaptured cities?

## Input

The input consists of several test cases.
The first line of input in each test case contains three integers N (0<N≤300), M (0<M≤100000) and Q (0<Q≤100000), which represents the number of cities, the numbers of inter-city roads and the number of operations.
Each of the next M lines contains three integer x, y and z, represents there is an inter-city road starts from x, end up with y and the length is z. You can assume that 0<z≤10000.
Each of the next Q lines contains the operations with the following format:
a)       0 x – means city x has just been recaptured.
b)      1 x y – means asking the shortest path from x to y only passing the recaptured cities.
The last case is followed by a line containing three zeros.

## Output

For each case, print the case number (1, 2 …) first.
For each operation 0, if city x is already recaptured (that is,the same 0 x operation appears again), print “City x is already recaptured.”
For each operation 1, if city x or y is not recaptured yet, print “City x or y is not available.” otherwise if Kudo can go from city x to city y only passing the recaptured cities, print the shortest path’s length; otherwise print “No such path.”
Your output format should imitate the sample output. Print a blank line after each test case.

## Sample Input
```
3 3 6
0 1 1
1 2 1
0 2 3
1 0 2
0 0
0 2
1 0 2
1 2 0
0 2

0 0 0

```
## Sample Output
```
Case 1:
City 0 or 2 is not available.
3
No such path.
City 2 is already recaptured.


```

## HINT


## Append Code
Source