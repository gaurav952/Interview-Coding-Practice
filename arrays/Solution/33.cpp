#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
		*a=*b;
		*b=temp;
}
void side0(int a[],int n)
{
	//int j=n-1;
	int i=0;
/*	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			j--;
			swap(a[j],a[i]);
		}
	}*/
	/*while(i<j)
	{
		if(a[i]==0&&a[j]!=0)
		{
			swap(a[i],a[j]);
			i++;
			j--;
		}
		else if(a[i]==0&&a[j]==0)
		{
			j--;
		}
		else
			i++;
	}
	*/
	int j=0;// count all nonzeros 
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			a[j]=a[i];		
				j++;
		}
	}
		while(j<n)
		{
			a[j]=0;
			j++;
		}
}

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
 int main()
 {
 	int a[]={ 1,0,4,0,7,8,0,12,0};
 	int n=sizeof(a)/sizeof(a[0]);
 	print (a,n);
 	cout<<endl;
 	side0(a,n);
 	print (a,n);
 	return 0;
 }
