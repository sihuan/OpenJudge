#include <iostream>
 #include <cmath>
 using namespace std;
 int arr[5]={0};
 class Equation{
 	public:
 		void setArgs(int a[]){
 			for(int i=0;i<5;i++)
 				arr[i]=a[i];
		 }
		 void print(){
		 	if(arr[0]==0&&arr[1]==0&&arr[2]==0&&arr[3]==0&&arr[4]==0)
		 	{
		 		cout<<"0";
			 }
		 	if(arr[0]!=0){
		 		if(arr[0]==1)
		 		cout<<"x^4";
		 		else
		 		cout<<arr[0]<<"x^4";
				 }
		 	if(arr[1]!=0){
		 		if(arr[0]==0)
		 		{
		 			if(arr[1]!=1)
		 			cout<<arr[1]<<"x^3";
		 			else
		 			cout<<"x^3";
				 }
		 		
		 		else
		 		if(arr[1]==1)
		 		cout<<"+x^3";
		 		else
		 		cout<<"+"<<arr[1]<<"x^3";
			 }
			if(arr[2]!=0){
				if(arr[0]==0&&arr[1]==0)
				cout<<arr[2]<<"x^2";
				else
		 		if(arr[2]==1)
		 		cout<<"+x^2";
		 		else
		 		cout<<"+"<<arr[2]<<"x^2";
				 }
				if(arr[3]!=0){
				if(arr[0]==0&&arr[1]==0&&arr[2]==0)
					cout<<arr[3]<<"x^1";
				else
		 		if(arr[3]==1)
		 		  cout<<"+x^1";
		 		else
		 		cout<<"+"<<arr[3]<<"x^1";
				 }
				 if(arr[4]!=0) {
				 	if(arr[0]==0&&arr[1]==0&&arr[2]==0&&arr[3]==0)
				 	cout<<arr[4];
				 	else
				 	cout<<"+"<<arr[4];
				 }
				 cout<<endl;
		 }
		 double getValue(double x){
		 	double sum=0;
		 	int j=0;
		 	for(int i=4;i>=0;i--,j++)
		 	{
		 		sum+=arr[j]*pow(x,i);	
			}
			 return sum;
		 }
 };
int main()
{
    int i, a[5];
    double x;
    Equation eq1;
    cout<<"1:";
    eq1.print();
    for (i = 0; i < 5; i++)
        cin>>a[i];
    eq1.setArgs(a);
    cout<<"2:";
    eq1.print();
    cin>>x;
    cout<<eq1.getValue(x)<<endl;
    return 0;
}
/**************************************************************
	Problem: 2195
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

