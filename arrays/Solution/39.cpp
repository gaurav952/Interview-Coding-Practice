#include<iostream>
#include<climits>
using namespace std;

int swap( int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;	
}

class maxheap{
	int *harr;
	int capacity;
	int heap_size;
public:
	maxheap(int a[],int size);
	void maxheapify(int i);
	int parent(int i){ return (i-1)/2;}
	int left(int i){ return (2*i+1)/2;}
	int right(int i){ return (2*i+2)/2;}

	int extractmax();
	int getmax() { return harr[0];}
	void replacemax(int x)
	{
		harr[0]=x;
		maxheapify(0);
	}
};

 maxheap::maxheap(int a[],int size)
 {
 	heap_size=size;
	harr=a;
	for (int i=(heap_size-1)/2;i>=0;i--)
	{
		maxheapify(i);
	}
}
void maxheap::maxheapify(int i)
{
	int l=left(i);
	int r=right(i);
	int largest=i;
	if(i<heap_size&&harr[l]>harr[i])
		largest=l;
	if(r<heap_size&& harr[r]>harr[largest])
		largest=r;
	if(largest!=i)
	{
		swap(&harr[i],&harr[largest]);
		maxheapify(largest);
	}
}

int maxheap::extractmax()
{
	if(heap_size==0)
		return INT_MAX;
	int root=harr[0];
	if(heap_size>1)
	{	harr[0]=harr[heap_size-1];
		maxheapify(harr[0]);
	}
		heap_size=heap_size-1;
		return root;
}

int ksmallest(int a[],int n ,int k)
{
	maxheap mh (a,k);
	for(int i=k;i<n;i++)
		 if(a[i]<mh.getmax())
		 	mh.replacemax(a[i]);
 return mh.getmax();
}

int main()
{
	int a[]={7, 10, 4, 3, 20, 15};
	int n=sizeof(a)/sizeof(a[0]);
	int k=3;
	int res=ksmallest(a,n,k);
	cout<<res<<endl;
	return 0;
	}
