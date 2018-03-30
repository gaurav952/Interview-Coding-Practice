#include<iostream>
#include<algorithm>
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
		*a=*b;
		*b=temp;
	}

int partition(int a[],int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			swap(a[j],a[i]);
			j++;
		}		
	}
	return j;
}

bool sub0arr(int a[], int n)
{
	int i,j;
	int sum[n];
	for(i=0;i<n;i++)
		sum[i]=0;
	int p=partition(a,n);;
	sum[p]=a[p];
	for(i=p;i<n-1;i++)
	{
		sum[i+1]+=sum[i]+a[i+1];
	}
	sum[p-1]=a[p-1];
	for(i=p-1;i>=1;i--)
	{
		sum[i-1]+=sum[i]+a[i-1];	
	}
	
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
//	cout<<a[p]<<" "<<a[p+1]<<" "<<a[p-1];
	int l=p-1, r=p;
		while(l>=0 ||r<n)
		{
			if(a[l]==a[r])	
				return true;
				
			}	
	return false;
}

int main()
{
	int a[]={4,-1,2,-3,1,6};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	cout<<endl<<sub0arr(a,n)<<endl;
	return 0;
}
