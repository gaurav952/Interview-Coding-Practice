#include <iostream>
using namespace std;

void fr_sec(int a[],int n)
{
	int i,prv=0,cur=a[0];
	for(i=1;i<n;i++)
	{
		if(cur<=a[i])
		{	prv=cur;
			cur=a[i];
		}
	}
	cout<<"Biggest: "<<cur<<endl<<"Second Biggest: "<<prv<<endl;
}

int main()
{
	int a[]={ 63,54,12,4,9,234,7,2};
	int n= sizeof(a)/sizeof(a[0]);
	fr_sec(a,n);
	return 0;
}