#include<iostream>
#include<cstring>
using namespace std;
class Integer
{
public:
    Integer(int data)
    {
        value=data;
    }
    Integer(char*,int);
    int getValue()
    {
        return value;
    }
private:
    int value;
};
/*化整为零,value多次利用*/
Integer::Integer(char* c, int t)
{
    int length=strlen(c);
    int val=0;
    int i;
    char ch[101];
    strcpy(ch,c);
    if(ch[0]=='-')
    {
        for(i=1; i<length; i++)
        {
            int num;
            char tmp=ch[i];//对字符串每个char
            if(tmp>='0'&&tmp<='9')
            {
                num=tmp-'0';//现将char转化为int
                val=val*t+num;//根据进制进行加和
            }
            else if(tmp>='a'&&tmp<='z')
            {
                num=tmp-'a'+10;
                val=val*t+num;
            }
            else if(tmp>='A'&&tmp<='Z')
            {
                num=tmp-'A'+10;
                val=val*t+num;
            }
        }
        val=-1*val;//变成-数
        value = val;
    }
    else
    {
        for(i=0; i<length; i++)//i从0开始
        {
            int num;
            char tmp=ch[i];
            if(tmp>='0'&&tmp<='9')
            {
                num=tmp-'0';
                val=val*t+num;
            }
            else if(tmp>='a'&&tmp<='z')
            {
                num=tmp-'a'+10;
                val=val*t+num;
            }
            else if(tmp>='A'&&tmp<='Z')
            {
                num=tmp-'A'+10;
                val=val*t+num;
            }
        }
        value = val;
    }
}

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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

