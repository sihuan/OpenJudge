#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private :
    int h_,m_,s_;
    static int cnt;
public:
    friend ostream& operator << (ostream &os, const Time& t);
    friend istream& operator >> (istream &is,Time& t);
    Time() {++cnt; h_=0; m_=0; s_=0;}
    Time(int h,int m,int s) : h_(h),m_(m),s_(s) {++cnt;}
    Time(const Time& t) : h_(t.hour()),m_(t.minute()),s_(t.second()) {
        ++cnt;
//        cout<<"There was a call to the copy constructor : "
//        <<h_<<","<<m_<<","<<s_<<endl;
    }
    ~Time() {}
    int hour() const {return h_;}
    int minute() const {return m_;}
    int second() const {return s_;}
    void hour(int h) {h_=h;}
    void minute(int m) {m_=m;}
    void second(int s) {s_=s;}
    const Time& setTime(int h,int m,int s) {h_=h;m_=m;s_=s; return *this;}
    const Time& setTime(const Time& t) {h_=t.hour(); m_=t.minute();s_=t.second(); return *this;}
    const Time& getTime() const {return *this;}
    const Time& inputTime() {
        int h,m,s;
        cin>>h>>m>>s;
        h_ = h; m_=m; s_=s;
        return *this;
    }
    void showTime() const {
        if(h_>=24 || m_>=60 || s_>=60 || h_<0 || m_<0 || s_<0)
            cout<<"Time error"<<endl;
        else
            cout<<setw(2)<<setfill('0')<<h_<<":"
            <<setw(2)<<setfill('0')<<m_<<":"
            <<setw(2)<<setfill('0')<<s_<<endl;
    }
    void showTime12Hour() const {
       if(h_>=24 || m_>=60 || s_>=60 || h_<0 || m_<0 || s_<0)
            cout<<"Time error"<<endl;
        else if(h_ == 0)
            cout<<12<<":"
            <<setw(2)<<setfill('0')<<m_<<":"
            <<setw(2)<<setfill('0')<<s_<<" a.m."<<endl;
        else if(h_<12)
            cout<<setw(2)<<setfill('0')<<h_<<":"
            <<setw(2)<<setfill('0')<<m_<<":"
            <<setw(2)<<setfill('0')<<s_<<" a.m."<<endl;
        else if(h_ == 12)
            cout<<setw(2)<<setfill('0')<<h_<<":"
            <<setw(2)<<setfill('0')<<m_<<":"
            <<setw(2)<<setfill('0')<<s_<<" p.m."<<endl;
        else
           cout<<setw(2)<<setfill('0')<<h_-12<<":"
            <<setw(2)<<setfill('0')<<m_<<":"
            <<setw(2)<<setfill('0')<<s_<<" p.m."<<endl;
    }
    const Time& operator += (int x) {
        if(h_>=24 || m_>=60 || s_>=60 || h_<0 || m_<0 || s_<0) ;
        else {
            int t = (h_*3600 + m_*60 + s_ + x)%86400;
            h_ = t/3600;
            m_ = (t-h_*3600)/60;
            s_ = t%60;
        }
        return *this;
    }
    const Time& operator -= (int x) {
        if(h_>=24 || m_>=60 || s_>=60 || h_<0 || m_<0 || s_<0) ;
        else {
            int t = (h_*3600 + m_*60 + s_ + 86400 - x%86400)%86400;
            h_ = t/3600;
            m_ = (t-h_*3600)/60;
            s_ = t%60;
        }
    }
    const Time& operator ++ () {
        if(h_>=24 || m_>=60 || s_>=60 || h_<0 || m_<0 || s_<0)
            return *this;
        if(++s_ == 60) {
            s_ = 0;
            if(++m_ == 60) {
                m_ = 0;
                if(++h_ == 24) {
                    h_ = 0;
                }
            }
        }
        return *this;
    }
    Time operator ++ (int) {
        if(h_>=24 || m_>=60 || s_>=60 || h_<0 || m_<0 || s_<0)
            return *this;
        Time t(*this);
        s_++;
        if(s_ == 60) {
            s_ = 0;
            m_++;
            if(m_ == 60) {
                m_ = 0;
                h_++;
                if(h_ == 24) {
                    h_ = 0;
                }
            }
        }
        return t;
    }
    const Time& operator -- () {
        if(h_>=24 || m_>=60 || s_>=60 || h_<0 || m_<0 || s_<0)
            return *this;
        if(--s_ < 0) {
            s_ = 59;
            if(--m_ < 0) {
                m_ = 59;
                if(--h_ < 0) {
                    h_ = 23;
                }
            }
        }
        return *this;
    }
    Time operator -- (int) {
        if(h_>=24 || m_>=60 || s_>=60 || h_<0 || m_<0 || s_<0)
            return *this;
        Time t(*this);
        s_--;
        if(s_ < 0) {
            s_ = 59;
            m_--;
            if(m_ < 0) {
                m_ = 59;
                h_--;
                if(h_ < 0) {
                    h_ = 23;
                }
            }
        }
        return t;
    }
    static int getNumber()  {return cnt;}
    static void displayNumber()  {cout<<"Now, There is "<<cnt<<" object of Time."<<endl;}
};
ostream& operator << (ostream &os, const Time& t)
{
    if(t.h_>=24 || t.m_>=60 || t.s_>=60 || t.h_<0 || t.m_<0 || t.s_<0)
            os<<"error!!!";
    else
        os<<setw(2)<<setfill('0')<<t.h_<<":"
        <<setw(2)<<setfill('0')<<t.m_<<":"
        <<setw(2)<<setfill('0')<<t.s_;
    return os;
}
istream& operator >> (istream &is,Time& t)
{
    is>>t.h_>>t.m_>>t.s_;
    return is;
}
int Time::cnt = 0;


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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:68 ms
	Memory:1272 kb
****************************************************************/

