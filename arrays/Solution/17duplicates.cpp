#include<iostream>
#include<cmath>
#include<map>
using namespace std;
void duplicates(int a[],int n)
{ int i,j;
	for(i=0;i<n;i++)
	{ 
	   if(a[abs(a[i])]>0)
	    	{
	    		a[abs(a[i])]=-a[abs(a[i])];
					}
		else
			cout<< abs(a[i])<<endl;;		
	}
	
}
int main()
{
  	int a[]= {1,2,3,5,6,7,5,4,3,1};
  	int n=sizeof(a)/sizeof(a[0]);
  	duplicates(a,n);
  	return 0;
  }
