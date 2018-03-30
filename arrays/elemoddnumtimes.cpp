//use hashmap  or xor simply all the elements
#include<iostream>
#include<map>
using namespace std;
int odd(int *a,int n)
{
	int i;
	map<int,int> m;
	for(i=0;i<n;i++)
	{
		m[a[i]]++;
			if(m[a[i]]==2)
				return a[i];
			}
		}
int main()
{
	int a[]={1,1,2,2,3};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<odd(a,n)<<endl;
	return 0;
}
