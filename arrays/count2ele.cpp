// try using xor gate
// array elements as index (important )

#include<iostream>
#include<map>
using namespace std;
  void count2ele(int *a,int n)
  {
  	int i,j,d1=a[0];
  	map<int,int> m;
  	for(i=0;i<n;i++)
  	{
  		m[a[i]]++;
	  }
	for(i=0;i<n;i++)
	{
		if(m[i]==2)
			cout<<i<<endl;
	}
  }
  int main( )
  {
  	int a[]= {1,2,3,5,6,7,5,4,3};
  	int n=sizeof(a)/sizeof(a[0]);
  	count2ele(a,n);
  	return 0;
  }
