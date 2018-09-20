#include<iostream>
using namespace std;
class SelectionSort
{
	int a[10],i,k,l,temp,index,m;
public:
	SelectionSort()
	{
		i=0;
	}
	void getdata()
	{
		cout<<"Enter a number: ";
		cin>>a[i];
		i++;
	}
	void sort()
	{
		for(k=0;k<10;k++)               
	     {
		  m=a[k];                      
		  index=k;
		for(l=k+1;l<=10;l++)              
		{ 
			if(m>a[l])
			{
				m=a[l];
				index=l;
			}
		}
		temp=a[k];                        
		a[k]=a[index];
		a[index]=temp;
	     }
	}
	void display()
	{
		cout<<"Sorted Array: \n\n"<<endl;
		for(k=0;k<10;k++)
			cout<<a[k]<<endl;
	}
	};

	void main()
	{
		SelectionSort ss;
		int j;
		for(j=0;j<10;j++)
			ss.getdata();
		ss.sort();
		ss.display();
		system("pause");
	}






		
	