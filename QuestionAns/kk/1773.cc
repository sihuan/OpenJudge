#include <iostream>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <cstring>

using namespace std;

class Integer
{
public:
    Integer(int data)
    {
        flag=0;
        first=data;
    }
    Integer(char* str,int radix)
    {
        flag=1;
        second = str;
        level = radix;
    }
    int getValue()
    {
        if(flag)
        {
            int i=0,sum=0,ff=1;
            while(!isalnum(second[i]))
                i++;
            if(i>0&&second[i-1]=='-')
                ff=-1;
            for(;second[i]!=0;i++)
            {
                int mid;
                if(isalpha(second[i]))
                {
                    second[i]=tolower(second[i]);
                    mid=second[i]-'a'+10;
                }

                else
                    mid=second[i]-'0';
                sum=sum*level+mid;
            }
            return sum*ff;
        }
        return first;
    }

private:
    int first;
    char* second;
    int level;
    int flag;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

