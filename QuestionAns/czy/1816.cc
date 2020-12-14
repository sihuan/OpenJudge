#include"bits/stdc++.h"
using namespace std;



class Matrix
{
private:
    int a[109][109];
    int h,l;
public:
     Matrix(){h=0, l=0;}
     friend Matrix operator+(Matrix &p,Matrix &q)
     {
         Matrix t;
        if(p.h!=q.h || p.l!=q.l) return t;
        t.l=p.l;
        t.h=p.h;
        for(int i=0;i<p.h;++i)
            for(int k=0;k<p.l;++k)
                t.a[i][k]=p.a[i][k]+q.a[i][k];
            return t;
     }
     friend Matrix operator*(Matrix &p,Matrix &q)
     {
         Matrix t;
         if(p.l!=q.h) return t;
         t.h=p.h;
         t.l=q.l;
         for(int i=0;i<t.h;++i)
         {
             for(int k=0;k<t.l;++k)
             {
                 int sum=0;
                 for(int v=0;v<p.l;++v)
                 {
                     sum=sum+p.a[i][v]*q.a[v][k];
                 }
                 t.a[i][k]=sum;
             }
         }
         return t;
     }
     friend ostream & operator <<(ostream &out,Matrix & p)
     {
        if(p.h == 0)
        {
            out << "Error" << endl;
            return out;
        }
        for(int i=0; i<p.h; i++)
        {
            for(int j=0; j<p.l; j++)
            {
                if(!j)
                 out << p.a[i][j];
                 else out << " " << p.a[i][j];
            }
            out << endl;
        }
        return out;
     }
     friend istream & operator >>(istream &is ,Matrix & p)
     {
         is>>p.h>>p.l;
         for(int i=0;i<p.h;++i)
            for(int k=0;k<p.l;++k)
                is>>p.a[i][k];
         return is;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1468 kb
****************************************************************/

