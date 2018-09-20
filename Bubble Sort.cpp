#include<iostream>
using namespace std;
class BubbleSort
{
 int a[100],i,temp,k,l;
public:
	BubbleSort()
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
		  for(l=0;l<10;l++)
		   {
			if(a[l]>a[l+1])
			 {
				temp=a[l];                     
				a[l]=a[l+1];
				a[l+1]=temp;
			 }
		  }
	    }
	}
	void display()
	{
		cout<<"Sorted Array: \n\n";
		for(k=1;k<=10;k++)
		{
			cout<<a[k]<<endl;
		}

	}
}
 
 
 
 void main()
{
	BubbleSort bs;
	int j;

	for(j=0;j<10;j++)
	{
		bs.getdata();
	}
	bs.sort();
	bs.display();
	system("pause");
	
}
