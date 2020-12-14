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
#define mod 10000
#define INF 1400000000
using namespace std;

/*class box{
	protected:
		int volume;
		int height, lenth, breadth;
	public:
		void set_lenth(int len){
			lenth = len;
		} 
		void set_breadth(int bre){
			breadth = bre;
		}
		void set_height(int he){
			height = he;
		}
};
class small_box : public box{
	public:
		int get_volume();
};

inline int small_box::get_volume(){
	volume = height * lenth * breadth;
	return volume;
}

int main(){
	small_box my_box;
	my_box.box::set_lenth(1), my_box.box::set_breadth(2), my_box.box::set_height(3);
	printf("%d", my_box.get_volume());
	return 0;
}*/ 

class Date{
	private:
		int Dyear, Dmonth, Dday;
	public:
		Date(int year, int month, int day){
			Dyear = year, Dmonth = month, Dday = day;
		}
		void showDate(){
			printf("%d-%02d-%02d", Dyear, Dmonth, Dday);
		}
};
class Time{
	private:
		int Dhour, Dminute, Dsecond;
	public:
		Time(int hour, int minute, int second){
			Dhour = hour, Dminute = minute, Dsecond = second;
		}
		void showTime(){
			printf("%02d:%02d:%02d", Dhour, Dminute, Dsecond);
		}
};
int main()
{
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        Date date(year, month, day);
        date.showDate();
        cout << " ";
        int hour, minute, second;
        cin >> hour >> minute >> second;
        Time time(hour, minute, second);
        time.showTime();
        cout << endl;
    }
}

/**************************************************************
	Problem: 1574
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

