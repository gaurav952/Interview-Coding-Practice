#include<iostream>
#include<map>
using namespace std;

bool sub0arr(int a[],int n)
{
	int i,j,sum=0;
	map<int,bool>m;
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum==0 ||m[sum]==true)
			return true;
		m[sum]=true;
	}
return false;
}

int main()
{
	int a[]={4,-1,2,-3,1,6};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<endl<<sub0arr(a,n)<<endl;
	return 0;
}
