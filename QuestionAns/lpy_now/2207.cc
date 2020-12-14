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

class Test{
	private:
		string Name;
	public:
		Test(string s){
			Name = s;
			if(Name.length()){
				cout << "Create an object with name " << Name << "\n";
			}
			else{
				cout << "Create an object with name NULL\n";
			}
		}
		Test(){
			if(Name.length()){
				cout << "Create an object with name " << Name << "\n";
			}
			else{
				cout << "Create an object with name NULL\n";
			}
		}
		~Test(){
			if(Name.length()){
				cout << "Erase an object with name " << Name << "\n";
			}
			else{
				cout << "Erase an object with name NULL\n";
			}
		}
};

int main()
{
    string name;
    Test t1;
    cin>>name;
    Test t2(name);
    return 0;
}
/**************************************************************
	Problem: 2207
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

