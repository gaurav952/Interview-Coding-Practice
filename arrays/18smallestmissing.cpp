#include<iostream>
#include<map>
using namespace std;
 int smallestmis(int a[],int start,int end)
 {
 		if(start>end)
 			return end+1;
 		if(a[start]!=start)
 			return start;
 		int mid=(end+start)/2;
 		if(a[mid]==mid)
		  	return smallestmis(a,mid+1,end);
		return smallestmis(a,start,mid);
 }
 int main()
 {
 	int a[]={0,1,2,6,7,8};
 	int n=sizeof(a)/sizeof(a[0]);
 	cout<<smallestmis(a,0,n-1)<<endl;
 	return 0;
 }
