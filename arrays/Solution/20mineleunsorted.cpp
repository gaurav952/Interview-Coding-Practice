//important 

#include<iostream>
#include<cmath>
using namespace  std;
void swap (int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int seg(int a[],int n)
{     
	int i,j=-1,mine=INT_MAX;
	 for (i=0;i<n;i++)
	 { 
	 	if(a[i]<=0)
	 	{	j++;
	 	 	swap(a[j],a[i]);
	 	}
	 }
	 
	return j+1;
}

int mineleunsorted(int a[],int n)
{
	int j=seg(a,n);
	int i;
	for(i=j;i<n;i++)
	{
		if(abs(a[i])<n &&a[abs(a[i])])
				a[abs(a[i])]=-a[abs(a[i])];
	}
	for(i=j;i<n;i++)
		{
			if(a[i]>0)
				return i;	
	}
	return n;
}
int main()
{
	int a[]={-3,5,-19,2,4,-2,3,1,18};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<mineleunsorted(a,n)<<endl;
	return 0;
}
