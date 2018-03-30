#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;



int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
    }
    int i,j;
    int sum1[n1],sum2[n2],sum3[n3],sumh1=0,sumh2=0,sumh3=0;
    for(i=n1;i>=0;i--)
    {sumh1+=h1[i];
       sum1[i]=sumh1; 
    }
     for(i=n2;i>=0;i--)
     {   sumh2+=h2[i];
        sum2[i]=sumh2;
     }
      for(i=n3;i>=n3;i--)
      {  sumh3+=h3[i];
         sum3[i]=sumh3;
      }
    if(sumh1==sumh2 && sumh2==sumh3)
        cout<<sumh1<<endl;
    for(i=n1;i>=0;i--)
    {
        cout<<sum1[i]<<" ";
    }
    cout<<endl;
        for(i=n2;i>=0;i--)
    {
        cout<<sum2[i]<<" ";
    }
    cout<<endl;
        for(i=n3;i>=0;i--)
    {
        cout<<sum3[i]<<" ";
    }
    cout<<endl;
    return 0;
}
