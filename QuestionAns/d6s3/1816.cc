#include <iostream>
using namespace std;

class Matrix {
private:
    int ar_[100][100];
    int a_, b_;

public:
    Matrix()
        : a_(0)
        , b_(0)
    {
    }
    friend istream& operator>>(istream& in, Matrix& ma)
    {
        cin >> ma.a_ >> ma.b_;
        for (int i = 0; i < ma.a_; i++)
            for (int j = 0; j < ma.b_; j++)
                in >> ma.ar_[i][j];
        return in;
    }
    friend ostream& operator<<(ostream& out, Matrix& ma)
    {
        if (ma.a_ == 0) {
            out << "Error" << endl;
            return out;
        }
        for (int i = 0; i < ma.a_; i++) {
            for (int j = 0; j < ma.b_; j++) {
                if (!j)
                    out << ma.ar_[i][j];
                else
                    out << " " << ma.ar_[i][j];
            }
            out << endl;
        }
        return out;
    }
    friend Matrix operator+(Matrix& p, Matrix& q)
    {
        Matrix t;
        if (p.a_ != q.a_ || p.b_ != q.b_)
            return t;
        t.a_ = p.a_;
        t.b_ = p.b_;
        for (int i = 0; i < p.a_; i++)
            for (int j = 0; j < p.b_; j++)
                t.ar_[i][j] = p.ar_[i][j] + q.ar_[i][j];
        return t;
    }
    friend Matrix operator*(Matrix& p, Matrix& q)
    {
        Matrix t;
        if (p.b_ != q.a_)
            return t;
        t.a_ = p.a_;
        t.b_ = q.b_;
        for (int i = 0; i < t.a_; i++)
            for (int j = 0; j < t.b_; j++) {
                int s = 0;
                for (int k = 0; k < p.b_; k++)
                    s += p.ar_[i][k] * q.ar_[k][j];
                t.ar_[i][j] = s;
            }
        return t;
    }
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1428 kb
****************************************************************/

