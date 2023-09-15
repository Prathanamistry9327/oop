#include<iostream>
using namespace std;
int main()
{
	int A,B;
	int add,sub,mul,div;
	
	cout<<"enter the value\n";
	cin>>A;
	cout<<"enter the value\n";
	cin>>B;
	
	add=A+B;
	sub=A-B;
	mul=A*B;
	div=(float)A/B;
	
	cout<<"enter the add\n"<<add<<endl;
	cout<<"enter the sub\n"<<sub<<endl;
	cout<<"enter the mul\n"<<mul<<endl;
	cout<<"enter the div\n"<<div<<endl;

	return 0;
}

