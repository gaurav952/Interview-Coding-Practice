// find the element in pivoted sorted array
#include<iostream>
using namespace std;
int findpivot(int[], int, int);
int bs(int[], int, int, int);
int pivotbs(int a[],int n,int key)
	{
		
		int pivot=findpivot(a,0,n-1);
		if(pivot==-1)
			return bs(a,0,n-1,key);
		if(a[pivot]==key) 
			return pivot;
		if(a[0]<=key)
			return bs(a,0,pivot-1,key);
		return bs(a,pivot+1,n-1,key);
	}
	int findpivot(int a[],int low,int high)
{
	if(high<low)
		return -1;
	if (high==low)
		return low;
	int mid= (high+low)/2;
	if(mid <high&& a[mid]>a[mid+1])
		return mid;
	if(mid>low && a[mid]<a[mid-1])
		return mid -1;
	if(a[mid]<=a[low])
		return findpivot(a,low,mid-1);
	return findpivot(a,mid+1,high);	
}
int bs(int a[], int l,int h, int key)
{
	if(h<l)
		return -1;
	int mid=l+(h-l)/2;
	if(key==a[mid])
		return mid;
	{
		if(a[mid]>key)
		return bs(a,l,mid-1,key);
	
		return bs(a,mid+1,h,key);
		
	}
}

int main()
{
	// enter some pivoted array
 	int i,j;
 	int a[]={ 18,20,22, 4 ,8,12,13,16,18};
 	int n = sizeof(a)/sizeof(a[0]);
   	int key = 12;
   	cout<<pivotbs(a,n,key);
   return 0;
}
 	

