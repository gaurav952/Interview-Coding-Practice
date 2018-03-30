#include<iostream>
#include <vector>
using namespace std;
void sort012(int *a,int n)
{
	vector<int>freq(3,0);
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		freq[a[i]]++;
		//sum+=freq[a[i]];
	}
	
	for(i=0;i<3;i++)
	{		cout<<freq[i]<<endl;
		while(freq[i])
		{
		a[sum]=i;
		freq[i]=freq[i]-1;
		sum++;
		}
	}
	
}
void print(int a[],int n)
{
	
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	int a[]={0,2,1,1,2,0,0,2,1,1,2};
	int n=sizeof(a)/sizeof(a[0]);
	print(a,n);
	sort012(a,n);
	print(a,n);
	return 0;
}
