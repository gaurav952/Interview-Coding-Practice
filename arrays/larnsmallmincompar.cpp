#include<iostream>
using namespace std;

struct pairs{
	 int max;
	 int min;
	};

	struct pairs gpair(int a[],int n)
	{
		struct pairs minmax;
		int i;
		if(n%2==0)
		{	if(a[0]<a[1])
			{
			minmax.min=a[0];
			minmax.max=a[1];
			}
			else
			{
				minmax.max=a[0];
				minmax.min=a[1];
			}
			i=2;
		}

		if(n%2==1)
		{  
			minmax.min=minmax.max=a[0];
			i=1;
		}
		 while(i<n-1)
		 {
		 	if(a[i]<a[i+1])
		 	{
		 		if(a[i+1]>minmax.max)
		 			minmax.max=a[i+1];
		 		if(a[i]<minmax.min)
		 			minmax.min=a[i];
		 	}
		 	else
		 	{
		 		 if(a[i]>minmax.max)
		 		 	minmax.max=a[i];
		 		 if(a[i+1]<minmax.min)
		 		 	minmax.min=a[i];
		 	}
		 	i+=2;
		 }
		 return minmax;
	}

int main()
{
	int a[]={ 4,54,3,21,76,2,8,73,212};
	int n=sizeof(a)/sizeof(a[0]);
	struct pairs p= gpair(a,n);// difference is the key point
	cout<<"Maximum: "<<p.max<<endl;
	cout<<"Minimum: "<<p.min<<endl;
	return 0;
}
