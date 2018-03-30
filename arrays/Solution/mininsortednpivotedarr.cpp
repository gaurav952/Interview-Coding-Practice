#include<iostream>
using namespace std;
int findpivot(int a[],int l,int h)
{
	if(h<l)
	 return -1;
	 if(h==l)
	 	return l;
	int mid=l+ (h-l)/2;
	if(mid <h&&a[mid]>a[mid+1])
		return mid;
	if(l<mid&& a[mid]<a[mid-1])
		return mid-1;
	if(a[mid]<=a[l])
		return findpivot(a,0,mid-1);
	return findpivot(a,mid+1,h);
}
int findmin(int a[],int n)
{	
	//find pivot;
	int pivot=findpivot(a,0,n-1);
	if(pivot==-1)
		return a[0];
	if(pivot)
	{
		return a[pivot+1]; 	
	}
	
}
int main()
{
	int a[]={12,15,19,3,6,9,11};
	int n=sizeof(a)/sizeof(a[0]);
	int num=findmin(a,n);
	cout<<num<<endl;
	return 0;
}
