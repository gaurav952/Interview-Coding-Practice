#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void segregate(int a[],int n)
{
	int l=0,r=n-1;
	while(l<r)
	{
		while(l<r&&a[l]==0)
		l++;
		if(l<r&&a[r]==1)
		r--;
		if(l<r)
		{
			swap(a[l],a[r]);
			l++;
			r--;
		}
		
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
}
int main()
{
	int a[]={0,1,0,1,1,0,0,1};
	int n=sizeof(a)/sizeof(a[0]);
	segregate(a,n);
	return 0;
}
