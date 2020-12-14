#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<cstdio>
#include<iomanip> 
#include<cstring>
#include<iostream>
#include<algorithm>
#define R register 
#define LL long long 
using namespace std;

int year_max, mounth_max, day_max;

struct Date{
	int year;
	int mounth;
	int day;
	inline void getmax(){
		while(scanf("%d-%d-%d", &year, &mounth, &day) != EOF){
			if(year > year_max || (year == year_max && mounth > mounth_max) || (year == year_max && mounth == mounth_max && day > day_max)){
				year_max = year, mounth_max = mounth, day_max = day;
			}
		}	
	}
	inline void put(){
		printf("%d-", year_max);
		if(mounth_max < 10){
			printf("0%d-", mounth_max);
		}
		else{
			printf("%d-", mounth_max);
		}
		if(day_max < 10){
			printf("0%d", day_max);
		}
		else{
			printf("%d", day_max);
		}
	}
};

int main()
{
    Date d;
    d.getmax();
    d.put();
    return 0;
}

/**************************************************************
	Problem: 2419
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

