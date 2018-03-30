#include<iostream>
#include <vector>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	int i,j;
	vector<vector<int> > a(m,vector<int>(n,0));
	for(i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{

			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
			for(j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}

		vector<vector<int> > t(n,vector<int>(m));	
	for(i=0;i<m;i++)
	{
			for(j=0;j<n;j++)
		{	//cout<<a[i][j]<<" ";
		//cout<<endl;
				t[j][m-1-i]=a[i][j];
	}
	}
	//cout<<t[0][0]<<" "<<t[0][1]<<" "<<endl<<t[1][0]<<" "<<t[1][1]<<endl;
	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++);
			cout<<t[i][j]<<" ";
			cout<<endl;
	}		

return 0;
}
