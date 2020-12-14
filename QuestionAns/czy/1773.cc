#include <iostream>
#include <string.h>
#include<ctype.h>
using namespace std;

class Integer
{
private:
    int xx;
public:
    Integer(int xxx):xx(xxx){}
    Integer(char *a, int xxx)
    {
        int temp=0;
        int f=1;
        int l=strlen(a);
        for(int i=0;i<l;++i)
        {
            if(a[i]=='-') {f=-1;continue;}
            if(a[i]>='A' && a[i]<='Z') a[i]=a[i]-'A'+'a';
            if(isalnum(a[i]))
              {
                    temp*=xxx;
                   if(isdigit(a[i])) temp+=(a[i]-'0');
                   else  temp+=(a[i]-'a'+10);
              }
        }
        xx=temp*f;
    }
    int  getValue(){return xx;}
};

int main()
{
    char str[100];
    int numOfData, numOfStr;
    int data, i, radix;
    
    cin>>numOfData;
    for (i = 0; i < numOfData; i++){
        cin>>data;
        Integer anInteger(data);
        cout<<anInteger.getValue()<<endl;
    }

    cin>>numOfStr;
    for (i = 0; i < numOfStr; i++){
        cin>>str>>radix;
        Integer anInteger(str,radix);
        cout<<anInteger.getValue()<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1773
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

