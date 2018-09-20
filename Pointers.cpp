#include<iostream>
using namespace std;
void main()
{
	char x[]="This is a character array";
	char *p;
	p=x;
	cout<<"p="<<p<<endl;
	cout<<"*p="<<*p<<endl;
	cout<<"p+1="<<p+1<<endl;
	cout<<"*p+1="<<*p+1<<endl;
	cout<<"*(p+3)="<<*(p+1)<<endl;
	cout<<"(*p)+1="<<(*p)+1<<endl;
	system("pause");
}



