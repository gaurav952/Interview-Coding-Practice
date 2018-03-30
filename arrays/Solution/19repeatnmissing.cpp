#include<iostream>
#include<limits>
#include<cmath>
using namespace std;
struct pairs{
	int  rep;
	int mis;
};

struct pairs findrepnmis(int a[],int n)
{	pairs p;
	int i,mine=INT_MAX,d1=a[0],d2=1;
	for(i=0;i<n;i++)
	{	 
	 	if(a[abs(a[i])]>0)
	 		{
	 			a[abs(a[i]-1)]=-a[abs(a[i]-1)];
	 		}
	 	else
	 		p.rep=abs(a[i]);
	}
		for (i=0;i<=n;i++)
			cout<<a[i]<<" ";
		
	for(i=0;i<n;i++)
		{
			if(a[i]>0)
				p.mis=i+1;
			}	
		return p;
}

int main()
{
	int a[]={1,2,3,4,5,2,7};
	int n=sizeof(a)/sizeof(a[0]);
	pairs p=findrepnmis(a,n);
	cout<<"Missing : "<<p.mis<<endl;
	cout<<"Repeating: "<<p.rep<<endl;
	return 0;
}
