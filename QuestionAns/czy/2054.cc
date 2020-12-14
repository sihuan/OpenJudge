#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;

class  Data
{
 private:
   int numb;
 public:
      Data():numb(0)
      {
         cout << "Data's default constructor." << endl;
      }
      Data(int x): numb(x){}
      int getValue()
      {
          return numb;
      }
      void setValue(int x)
      {
          numb = x;
      }
      ~Data()
      {
          cout << "Data " << numb << " is erased." << endl;
      }
};
class DataArray
{
  private:
      Data  *data1;
      int num;
  public:
      DataArray()
      {
          cout << "DataArray's default constructor." << endl;
      }
      DataArray(int n , int *shuju)
      {    num = n;
          data1 = new Data[n];
          for(int i=0; i < num; i++)
            data1[i].setValue(shuju[i]);
          cout << "DataArray's constructor." << endl;
      }
      int getSum()
      {   int sum = 0;
          for(int i=0; i<num; i++)
            sum += data1[i].getValue();
          return sum;
      }
      ~DataArray()
      {
          delete []data1;
          cout << "DataArray's deconstructor." << endl;
      }

};
int main()
{
    int i, n;
    Data test, *testP;
    cin>>n;
    int tmp[n];
    for (i = 0; i < n; i++)
        cin>>tmp[i];
    DataArray datas(n, tmp);
    cout<<"Sum is "<<datas.getSum()<<endl;
    testP = new Data;
    cin>>n;
    testP->setValue(n);
    delete testP;
    return 0;
}
/**************************************************************
	Problem: 2054
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

