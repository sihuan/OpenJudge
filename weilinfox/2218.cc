#include<iostream>
#include <cmath>
#include <math.h>

using namespace std;

bool sudu(int x){
    if(x <= 1){
        return false;
    }
    int i =2;
    for(i =2;i<=sqrt(x);i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}


class Compute{
public:
    int n_;
    int m_;
    Compute(int m,int n):n_(n),m_(m){
    }
    void showResult(){
        if(n_<0){
            int temp = -n_;
            while(temp){
                if(sudu(m_)){
                    cout<<m_;
                    temp -=1;
                    break;
                }
                if(m_<= 2){
                    break;
                }
                m_--;
            }
            m_--;
            if(m_ >= 2)
            while(temp){
                if(sudu(m_)){
                    cout<<" "<<m_;
                    temp-=1;
                }
                if(m_<= 2){
                    break;
                }
                m_--;
            }
        }else{
            int temp = n_;
            while(temp){
                if(sudu(m_)){
                    cout<<m_;;
                    temp -=1;
                    break;
                }
                m_++;
            }
            m_++;
            while(temp){
                if(sudu(m_)){
                    cout<<" "<<m_;
                    temp-=1;
                }
                m_++;
            }
        }
    }
};

int main()
{
    int a, b;
    cin>>a>>b;
    Compute compute(a, b);
    compute.showResult();
    return 0;
}
/**************************************************************
	Problem: 2218
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

