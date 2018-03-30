//important question

#include<iostream>
using namespace std;

int maxarr(int a1[],int a2[],int n1,int n2)
{
	int i=0,j=0,sum=0,sum1=0,sum2=0,k;
	while(i<n1&& j<n2)
	{
		if(a1[i]<a2[j])
			sum1+=a1[i++];
		else if(a1[i]>a2[j])
			sum2+=a2[j++];
		else
		{
			sum+=max(sum1,sum2);
			sum1=0;
			sum2=0;
			while(i<n1&&j<n2 &&a1[i]==a2[j])
			{
				sum+=a2[j++];
				i++;
			}
		}
	}
	
	while(i<n1)
		sum1+=a1[i++];
	while(j<n2)
		sum2+=a2[j++];
	sum+=max(sum1,sum2);
	return sum;
}



int main()
{
	int a1[]={2, 3, 7, 10, 12};
	int a2[]= {1, 5, 7, 8};
	int n1=sizeof(a1)/sizeof(a1[0]);
	int n2=sizeof(a2)/sizeof(a2[0]);
	cout<<maxarr(a1,a2,n1,n2);
	return 0;
}
