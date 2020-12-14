#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;


class Time {
        int a, b, c;
public:
        friend ostream& operator<< (ostream&, const Time&);
        friend istream& operator>> (istream&, Time&);
        Time& operator++ () {
                if (this->a < 0 || this->a > 23 || this->b < 0 || this->b > 59 || this->c < 0 || this->c > 59)
                        return *this;
                ++(this->c);
                if (this->c > 59) {
                        (this->c) -= 60;
                        (this->b)++;
                }
                if (this->b > 59) {
                        (this->b) -= 60;
                        (this->a)++;
                }
                if (this->a > 23)
                        (this->a) -= 24;
                return *this;
        }
        Time& operator-- () {
                if (this->a < 0 || this->a > 23 || this->b < 0 || this->b > 59 || this->c < 0 || this->c > 59)
                        return *this;
                --(this->c);
                if (this->c < 0) {
                        (this->c) += 60;
                        (this->b)--;
                }
                if (this->b < 0) {
                        (this->b) += 60;
                        (this->a)--;
                }
                if (this->a < 0)
                        (this->a) += 24;

                return *this;
        }
        Time operator++ (int) {
                if (this->a < 0 || this->a > 23 || this->b < 0 || this->b > 59 || this->c < 0 || this->c > 59)
                        return *this;

                Time t(*this); (this->c)++; 
                if (this->c > 59) {
                        (this->c) -= 60;
                        (this->b)++;
                }
                if (this->b > 59) {
                        (this->b) -= 60;
                        (this->a)++;
                }
                if (this->a > 23)
                        (this->a) -= 24;

                return t;
        }
        Time operator-- (int) {
                if (this->a < 0 || this->a > 23 || this->b < 0 || this->b > 59 || this->c < 0 || this->c > 59)
                        return *this;
                Time t(*this);
                (this->c)--;
                if (this->c < 0) {
                        (this->c) += 60;
                        (this->b)--;
                }
                if (this->b < 0) {
                        (this->b) += 60;
                        (this->a)--;
                }
                if (this->a < 0)
                        (this->a) += 24;

                return t;
        }
};

ostream& operator<< (ostream& os, const Time &t)
{
        if (t.a < 0 || t.a > 23 || t.b < 0 || t.b > 59 || t.c < 0 || t.c > 59)
                os << "error!!!";
        else
                os << setw(2) << setfill('0') << fixed << t.a << ':' \
                << setw(2) << setfill('0') << fixed << t.b << ':' \
                << setw(2) << setfill('0') << fixed << t.c;
        return os;
}

istream& operator>> (istream& is, Time &t)
{
        is >> t.a >> t.b >> t.c;
        return is;
}



int main()
{
    Time t;
    int cases;
    cin>>cases;
    cout<<setw(8)<<left<<"++t"<<" ";
    cout<<setw(8)<<left<<"--t"<<" ";
    cout<<setw(8)<<left<<"t"<<" ";
    cout<<setw(8)<<left<<"t--"<<" ";
    cout<<setw(8)<<left<<"t++"<<" ";
    cout<<setw(8)<<left<<"t"<<right<<endl;
    for(int i = 1; i <= cases; ++i)
    {
        cin>>t;
        cout<<(++t)<<" ";
        cout<<(--t)<<" ";
        cout<<t<<" ";
        cout<<t--<<" ";
        cout<<t++<<" ";
        cout<<t<<endl;
    }
}

/**************************************************************
	Problem: 1396
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:60 ms
	Memory:1272 kb
****************************************************************/

