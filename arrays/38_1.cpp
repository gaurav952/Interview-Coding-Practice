#include<iostream>

using namespace std;


void findZeroes(int a[],int n,int m)
{
	int wl=0,wr=0,count=0;
	int best=0,bestwi=0;
	while(wr<n)
	{
		if(count<=m)
		{	if(a[wr]==0)
				count++;
			wr++;
				
		}
		if (count>m)
		{	if(a[wl]==0)
			count--;
			wl++;
		}

		if(wr-wl>best)
		{
			bestwi=wr-wl;
			best=wl;

		}
	}
	for(int i=0;i<bestwi;i++)
		if(a[best+i]==0)
			cout<<best+i<<" ";
}

int main()
{
   int arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1};
	int m = 2;
	int n =sizeof(arr)/sizeof(arr[0]);
	cout << "Indexes of zeroes to be flipped are ";
	findZeroes(arr, n, m);
	return 0;
}
