#include<iostream>
using namespace std;
class InsertionSort
{
	int a[10],i,k,temp,c,l;
public:
	InsertionSort()
	{
		i=0;
		c=0;
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
		temp=a[k];
		c=k-1;
		while(temp<a[c])
		{
			a[c+1]=a[c];
			c--;
		}
		a[c+1]=temp;
	 }
	}
	void display()
	{
		cout<<"\n Sorted Array: \n\n";
		for (l=0;l<10;l++)
			cout<<a[l]<<endl;
	}
};
	main()
	{
		InsertionSort is;
		int j;
		for(j=0;j<10;j++)
			is.getdata();
		is.sort();
		is.display();
		//system("pause");
	}
