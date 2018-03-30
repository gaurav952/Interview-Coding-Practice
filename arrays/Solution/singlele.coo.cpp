//  hashmap and xor options (xor all elements  only the single element would be a result
#include<iostream>
#include <map>

//using hashmap because i have never implemented it
using namespace std;
int  singlele(int *a,int n)
{   map<int,int> m;
	int i,j;
	for(i=0;i<n;i++)
	{
		m[a[i]]++;
	}
	for(i=0;i<n;i++)
	{
		if(m[i]==1)
			return i;
	}

}
int main()
{
	int a[]={2,2,3,4,3,4,5,5,6,7,8,7,8};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<singlele(a,n)<<endl;
	return 0;
}
