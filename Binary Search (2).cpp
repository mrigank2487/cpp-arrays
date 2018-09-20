#include<iostream>
using namespace std;
class BinarySearch
{
    int x[10],low,mid,high,i,num;
public:
    void initialize()
    {
        i=0;
        low=0;
        high=9;
    }
   void getdata()
    {
        cout<<"Enter a number: ";
        cin>>x[i];
		i++;
    }
    void search()
    {
        cout<<"Enter number to be searched: ";
        cin>>num;
        while (low<=high)
        {
            mid=(low+high)/2;
            if(x[mid]==num)
                cout<<"Number "<<num<<" found at "<<mid+1<<endl;
            if(x[mid]<num)
                low=mid+1;
            else
                high=mid-1;
			i++;
        }
    }

};
 main()
{
    BinarySearch bs;
    int j;

    bs.initialize();
    for(j=0;j<10;j++)
      bs.getdata();
    bs.search();
	//system("pause");
}
