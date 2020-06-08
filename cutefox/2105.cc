#include <bits/stdc++.h>
 
using namespace std;
 
class MyString
{
private :
    char s[1086];
public :
    MyString(){}
    void input()
    {
        cin>>s;
    }
     void output()
     {
         char *p = s;
         int flag = 0;
         int len = strlen(s)/2;
         int length = strlen(s);
         for(int i = 0; i < len; i++)
         {
             for(int j = length - i - 1;j > len; j--)
             {
                 if(s[i]==s[j])
                    break;
                 else
                 {
                     flag = 1;//非回文
                     break;
                 }
 
             }
             if(flag == 1)
                break;
             else
                continue;
         }
         if(flag == 1)
         {
 
             while(*p!='\0')
            {
                cout<<*p++;
            }//非回文全输出。
         }
         else
         {
             if(length%2==0)//回文判断奇偶输出
             {
                 while(len--)
                {
                    cout<<*p++;
                }
             }
             else
             {
                 len+=1;
                 while(len--)
                {
                    cout<<*p++;
                }
             }
         }
         cout<<endl;
     }
};
 

int main()
{
    MyString str;
    int n, i;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        str.input();
        str.output();
    }
    return 0;
}

/**************************************************************
	Problem: 2105
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

