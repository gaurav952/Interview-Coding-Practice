#include<iostream>
#include<limits>
using namespace std;

int maxdiff(int a[],int n)
{
	int mine=INT_MAX,maxe=INT_MIN,i,maxd=INT_MIN;
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
			{	
				if(a[i]>maxe)
					maxe=a[i];
				if(a[i+1]<mine)
					mine=a[i+1];
			}
			else
			{
				if(a[i+1]>maxe)
					maxe=a[i+1];
				if(a[i]<mine)
					mine=a[i];
			}
			}
			return maxe-mine;
	}

int main()
{
	int a[]={ 11,2,4,34,5,7,8,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<maxdiff(a,n)<<endl;
	return 0;
}
