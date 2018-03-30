// IMPORTANT
include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp=*x;
		*x=*y;
		*y=temp;
}
void sort012(int *a,int n)
{
	int l=0,mid=0,h=n-1;
	while(mid<=h)
	{
		switch(a[mid])
		{
			case 0:
			{
				swap(a[l++],a[mid++]);
				break;
			}
			case 1:
				{
					mid++;
					break;
				}
			case 2:
				{
					swap(a[mid],a[h--]);
						break;
				}
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
