#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int dp[1000001]= {0};
  int a; 
  cin>>a;
  dp[1]=1;
  dp[2]=2;

for(int i=3; i<=a; i++)
  {
  dp[i]=(dp[i-2]+dp[i-1])%15746;
  }  
    cout<<dp[a]<< "\n";

}
