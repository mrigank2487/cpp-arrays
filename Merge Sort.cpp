#include<iostream>
using namespace std;
class MergeSort
{
	int a[5],b[5],c[10],i,j,k,l;
public:
	MergeSort()
	{
		k=0;
	}
	void getdata()
	{
		for(i=0;i<5;i++)
		{
		    cout<<"Enter a number in 1st Array: ";
		    cin>>a[i];
		}
		for(j=0;j<5;j++)
		{
			cout<<"Enter a number in 2nd Array: ";
			cin>>b[j];
		}
	}
	void sort()
		{
		i=0;j=0;
		while((i<5)&&(j<5))
	     {
		  if(a[i]<b[j])
		   {
			c[k]=a[i];
			k++;
			i++;	
		   }
		   else
		   {
			c[k]=b[j];
			k++;
			j++;
		   }
		}

	     while(i<5)
	     {
		   c[k]=a[i];
		   k++;
		   i++;
		   j++;
	     }
		 while (j<5)
		 {
		   c[k]=b[j];
		   k++;
		   j++;
		   i++;
		 }
	
	}
	void display()
	{   
		cout<<"Sorted Array: \n\n";
		for(l=0;l<10;l++)
			cout<<c[l]<<endl;
	}
};
	void main()
	{
		MergeSort ms;
		ms.getdata();
		ms.sort();
		ms.display();
		system("pause");
	}
	
