#include <iostream>

using namespace std;

	
void print(int *a,int n)
{
	
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void swap(int *x,int *y)
{
	int temp=*x;
		*x=*y;
		*y=temp;
}
void posnnegseg(int *a,int n)
{
	int i=-1,j;
	for(j=0;j<n;j++)
	{
		if(a[j]<0)
		{ i++;
		 swap(a[j],a[i]);
		}
	}
		print(a,n);
		int k=0;
		int l=i+1;
		while(l<n&&k<n&&a[k]<0)
		{
			swap(a[k],a[l]);
			l++;
			k+=2;
		}
	}
	
		

int main()
 {
 		int a[]={1,2,-3,-4,-12,1,-1,23,100};
 		int n=sizeof(a)/sizeof(a[0]);
 		print(a,n);
		posnnegseg(a,n);
 		print(a,n);
 		return 0;
 }
