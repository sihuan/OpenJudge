#include <iostream>
#include <vector>

using namespace std;

class Matrix{
    friend ostream& operator << (ostream& os,const Matrix& m){
        if(m.r_ == 0 || m.c_ == 0) os<<"Error"<<endl;
        else {
            for(int i=0; i<m.r_; ++i) {
                for(int j=0; j<m.c_; ++j){
                    if(j) os<<" ";
                    os<<m.m_[i][j];
                }
                os<<endl;
            }
        }
        return os;
    }
    friend istream& operator >> (istream& is,Matrix& m){
        is>>m.r_;
        is>>m.c_;
        m.m_ = new int*[m.r_];
        for(int i=0; i<m.r_; ++i){
            m.m_[i] = new int[m.c_];
            for(int j=0; j<m.c_; ++j)
                is>>m.m_[i][j];
        }
        return is;
    }
public:
    Matrix() : r_(0),c_(0){}
    Matrix(int **m,int r,int c) : m_(m),r_(r),c_(c){}

    Matrix operator+(const Matrix& a) {
        if(r_ != a.r_ || c_ != a.c_) {
                Matrix c;
                return c;
        }
        int **m = new int*[r_];
        for(int i=0; i<r_; ++i){
            m[i] = new int[c_];
            for(int j=0; j<c_; ++j){
                m[i][j] = m_[i][j] + a.m_[i][j];
            }
        }
        Matrix c(m,r_,c_);
        return c;
    }
    Matrix operator*(const Matrix& a){
        if(c_ != a.r_) {
                Matrix c;
                return c;
        }
        int **m = new int*[r_];
        for(int i=0; i<r_; ++i)
            m[i] = new int[c_];
        for(int i=0; i<r_; ++i){
            for(int j=0; j<a.c_; ++j){
                    m[i][j] = 0;
                for(int k=0; k<c_; ++k){
                    m[i][j] += m_[i][k] * a.m_[k][j];
                }
            }
        }
        Matrix c(m,r_,a.c_);
        return c;
    }
private:
    int **m_;
    int r_;
    int c_;
};
int main()
{
    int cases, i;
    cin>>cases;
    for (i = 0; i < cases; i++)
    {
        Matrix A, B, C, D;
        cin>>A>>B;
        C = A + B;
        D = A * B;
        cout<<"Case "<<i + 1<<":"<<endl;
        cout<<C<<endl;
        cout<<D;
    }
    return 0;
}
/**************************************************************
	Problem: 1816
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

