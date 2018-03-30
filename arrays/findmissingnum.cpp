// can also use formula -- n*(n+1)/2


#include<iostream>
using namespace std;
int findmissing(int *a,int n)
{	int i,d1=a[0],d2=1;
	for (i=1;i<n;i++)
		 d1=d1^a[i];
	for(i=2;i<=n+1;i++)
		d2=d2^i;
		return d1^d2;
}	
int main()
{
	int a[]={1,2,3,4,5,6,7,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<findmissing(a,n)<<endl;
	return 0;
}
