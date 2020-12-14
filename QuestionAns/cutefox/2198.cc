#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include<typeinfo>
#include<cmath>
#include<math.h>
 
using namespace std;
 
 
 
class Equation{
     
public:
    int *a_;
    int n_;
    void setArgs(int a[],int n){
        a_ = new int[n+3];
        for(int i=0;i<=n;i++){
            a_[i] = a[i];
        }
        n_ = n;
    }
    void print(){
        int flag = 0;
        for(int i=0;i<=n_;i++){
            if(i<n_-1){
                if(a_[i]!=0&&a_[i]!=1){
                    cout <<a_[i]<<"x^"<<n_-i;
                    flag = 1;
                }else if(a_[i]==1)
                {
                    cout<<"x^"<<n_-i;
                    flag = 1;
                }
                if(a_[i+1]!=0 && flag == 1){
                    cout<<"+";
                    flag = 0;
                }
            }else if(i == n_-1){
                if(a_[i]!=0&&a_[i]!=1){
                    cout <<a_[i]<<"x";
                    flag = 1;
                }else if(a_[i]==1)
                {
                    cout<<"x";
                    flag =1;
                }
                if(a_[i+1]!=0&&flag == 1){
                    cout<<"+";
                    flag = 0;
                }
            }
            else{
                if(a_[i] != 0)
                cout<<a_[i]<<endl;
                else{
                    cout<<endl;
                }
            }
             
        }
    }
    double getValue(double x){
        double sum;
        for(int i =0;i<=n_;i++){
            sum += pow(x,n_-i)*a_[i];
        }
        return sum;
    }
     
};
int main()
{
    int i, j, n, m, *a;
    double x;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        Equation eq;
        cin>>m;
        a = new int[m + 1];
        for (j = 0; j <= m; j++)
            cin>>a[j];
        eq.setArgs(a, m);
        eq.print();
        cin>>x;
        cout<<eq.getValue(x)<<endl;
        delete []a;
    }
    return 0;
}
/**************************************************************
	Problem: 2198
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

