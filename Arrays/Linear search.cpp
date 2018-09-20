#include<iostream>
using namespace std;
	class LinearSearch
	{
		int number[10];
		int i,k;
	public:
		void initialize()
		{
			i=0;
		}
		void getdata()
		{
			cout<<"Enter a number: ";
			cin>>number[i];
			i++;
		}
		int search(int s,int c)
		{
			for (k=0;k<10;k++)
			{
			 if(s==number[i])
			  {
				cout<<"Number "<<number[i]<<" found at "<<i+1<<" position."<<endl;
				c++;
				
			  }
			 
			 i++;
			}
			return(c);
		}
		
	};
	void main()
	{
		int j,s,c=0;
		LinearSearch ls;
		ls.initialize();
		for(j=0;j<10;j++)
			ls.getdata();
		cout<<"Enter number to be searched: ";
		cin>>s;
		ls.initialize();
		c=ls.search(s,c);
		if(c==0)
			cout<<"Number not found"<<endl;
		system("pause");
	}
