#include<iostream>
#include<map>

using namespace std;

void newar(int a[],int n)
{
	int i=0,j=0;
	map<int,bool> m;
	for(i=0;i<n;i++)
		{
			if(m[a[i]]==false)
				{
				cout<<a[i]<<" ";
				m[a[i]]=true;
			}
		}
}
int main()
{
	int arr[]= {12, 10, 9, 45, 2, 10, 10, 45};
	int n=sizeof(arr)/sizeof(arr[0]);
 	newar(arr,n);
 	return 0;
}
