#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
#//typedef long long int ll;

int comp(string s1,string  s2)
{
	string s1s2= s1.append(s2);
	string s2s1=s2.append(s1);
	return s1s2>s2s1? 1:0;
}

void biggestnum(vector<string> s)
{
	sort(s.begin(),s.end(),comp);
 for(int i=0;i<s.size();i++)
 {
 	cout<<s[i];
 }
}
int main()
{
		
		vector<string> s;
		s.push_back("54");
		s.push_back("546");
		s.push_back("548");
		s.push_back("60");
		biggestnum(s);
		cout<<endl;
		return 0;
}
