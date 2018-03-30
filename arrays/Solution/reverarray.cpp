#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void reversearr(int a[],int start,int end)
	{
		while(start<end)
		{
			swap(a[start],a[end]);
			start++;
			end--;
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
	int a[]={1,2,4,5,6,7,8};
	int n=sizeof(a)/sizeof(a[0]);
	print(a,n);
	reversearr(a,0,n-1);
	print(a,n);
	return 0;
}
