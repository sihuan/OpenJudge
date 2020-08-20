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

class MyString{
	private:
		string s;
	public:
		void input(){
			cin >> s;
		}
		void output(){
			for(int i = 0; i < s.length(); ++ i){
				if(s[i] != s[s.length() - i -1]){
					cout << s << endl;
					return ;
				}
			}
			if(s.length() & 1){
				for(int i = 0; i <= s.length() / 2; ++ i){
					putchar(s[i]);
				}	
			}
			else{
				for(int i = 0; i < s.length() / 2; ++ i){
					putchar(s[i]);
				}		
			}
			printf("\n");
		}
};


int main()
{
    MyString str;
    int n, i;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        str.input();
        str.output();
    }
    return 0;
}

/**************************************************************
	Problem: 2105
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

