#include<iostream>
using namespace std;
void segeveodd(int *a,int n)
{
	int l=0,h=n-1;
	while(l<h)
	{
	while(l<h && a[l]%2==1)
		l++;
	while(l<h&& a[h]%2==0)
		h--;
	if(l<h)
	{
		swap(a[l++],a[h--]);
	}
		
	}
}
void swap(int *x,int *y)
{
	int temp=*x;
		*x=*y;
		*y=temp;
}
void print(int a[],int n)
{
	
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	int a[]={ 1,2,4,5,7,8,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	print(a,n);
	segeveodd(a,n);
	print(a,n);
	return 0;
}
