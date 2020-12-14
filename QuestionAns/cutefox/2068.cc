#include <iostream>
using namespace std;
class MyString
{
private:
    char a[101];
    static int i;
public:
    friend istream&operator>>(istream& is,MyString& another);
    int operator[](char ch)
    {
        for(i=i;a[i]!='\0';){
          if(a[i]==ch)
          {
              i++;
              return i-1;

          }
          else
            i++;
        }
            return -1;
    }
};
int MyString::i=0;
istream& operator>>(istream& is,MyString& another)
{
    is>>another.a;
    return is;
}

int main()
{
    MyString mystr;
    char c;
    int pos;
    cin>>mystr>>c;
    do{
        pos = mystr[c];
        cout<<pos<<endl;
    }while(pos != -1);
    return 0;
}
/**************************************************************
	Problem: 2068
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

