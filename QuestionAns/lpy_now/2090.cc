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

class Time{
	private:
		int hour, minute, second;
	public:
		Time(int a, int b, int c) : hour(a), minute(b), second(c){
			cout << "Time " << hour << ":" << minute << ":" << second << " is created.\n";
		}
		~Time(){
			cout << "Time " << hour << ":" << minute << ":" << second << " is erased.\n";
		}
		int time_now(){
			return second + 60 * minute + 3600 * hour;
		}
};
class Alarm{
	private:
		Time alarm_time;
		string alarm_name;
	public:
		Alarm(int a, int b, int c, string s) : alarm_time(a, b, c){
			alarm_name = s;
			cout << "Alarm " << alarm_name << " is created.\n";
		}
		~Alarm(){
			cout << "Alarm " << alarm_name << " is erased.\n";
		}
		string getThing(){
			return alarm_name;
		}
		int remainSeconds(Time &now){
			return alarm_time.time_now() - now.time_now();
		}
};
int main()
{
    int h, m, s;
    string th;
    cin>>th;
    cin>>h>>m>>s;
    Alarm alarm(h,m,s,th);
    cin>>h>>m>>s;
    Time now(h,m,s);
    cout<<"Alarm "<<alarm.getThing()<<" will start after "<<alarm.remainSeconds(now)<<" seconds."<<endl;
    return 0;
}
/**************************************************************
	Problem: 2090
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

