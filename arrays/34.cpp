#include<iostream>
#include<map>
using namespace std;

//used hash

int coudispair(int a[],int n,int k)
{
	int count=0;
	map<int,int> m;
	for(int i=0;i<n;i++)
		{
			if(a[i]>=k)
				m[a[i]-k]=a[i]-k;
			if(a[i]<k)
				m[k+a[i]]=k+a[i];
			if(m[a[i]]==a[i])
				count++;
		}
return count;
}

int main()
{
	int a[]={1, 5, 3, 4, 2,10,13,16};
	int k=3;
	int n=sizeof(a)/sizeof(a[0]);
	cout<<coudispair(a,n,k)<<endl;
	return 0;
}
