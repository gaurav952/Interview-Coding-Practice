#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int counttriplets(int a[],int n,int x)
{	sort(a,a+n);
	int i,l,r,count=0;
	for(i=0;i<n-2;i++)
	{ 
		l=1;
		r=n-1;
		while(l<r) 
		{
			if(a[i]+a[l]+a[r]<x)
			{
				count++;
				l++;
			}
			else if(a[i]+a[l]+a[r]>=x)
				r--;
		}
	}
	return count;
}

int main()
{
	int a[]={5, 1, 3, 4, 7};
	int n=sizeof(a)/sizeof(a[0]);
	int x=12;
	cout<<counttriplets(a,n,x)<<endl;
	return 0;
}
