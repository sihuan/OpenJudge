#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<vector>
#include<iomanip> 
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register 
#define LL long long 
#define pi 3.141
#define INF 1400000000
using namespace std;

 
int sh[115] = {1,2,3,5,7,11,101,131,151,181,191,313,353,373,383,727,757,787,797,919,929,10301,10501,10601,11311,
11411,12421,12721,12821,13331,13831,13931,14341,14741,15451,15551,16061,16361,16561,16661,17471
,17971,18181,18481,19391,19891,19991,30103,30203,30403,30703,30803,31013,31513,32323,32423,33533,34543,34843,35053,35153,35353,35753,36263,36563,37273,37573,38083,38183,38783,39293,70207,70507,
70607,71317,71917,72227,72727,73037,73237,73637,74047,74747,75557,76367,76667,77377,77477,77977,78487,
78787,78887,79397,79697,79997,90709,91019,93139,93239,93739,94049,94349,94649,94849,94949,95959,96269,96469
,96769,97379,97579,97879,98389,98689};
 
bool hws(int value){
 
    int a[10001];
    int i ;
    for(i =1;value != 0;i++){
        a[i] = value%10;
        value /= 10;
    }
    i--;
    for(int j=1;j<i;j++,i--){
        if(a[j] != a[i]){
            return false;
        }
    }
    return true;
}
bool susu(int value){
 
    for(int i=2 ;i<=sqrt(value);i++){
 
        if(value %i == 0){
            return false;
        }
    }
    return  hws(value);
}
class SpecialPrime{
 
public:
    static bool judge(int value){
        for(int i =0;i<115;i++){
            if(sh[i] == value){
                return true;
            }
        }
        return false;
    }
};
int main()
{
    int m, n, i;
    cin>>m>>n;
    for (i = m; i < n; i++)
    {
        if (SpecialPrime::judge(i))
            cout<<i<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 2210
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:728 ms
	Memory:1280 kb
****************************************************************/

