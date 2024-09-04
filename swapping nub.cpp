#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter a number";
	cin>>a;
	cout<<"enter a number";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"swapped numbers are a"<<b<<",b is"<<a;
	return 0;
}
