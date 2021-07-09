#include<iostream>
#include<algorithm>
using namespace std;

#define INF 10000001

int dp[101][101];

int main()
{
	int n,m;
	
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i == j) 
				dp[i][j] = 0;
			else
				dp[i][j] = INF;

	while(m!=0)
	{
		int a, b,c;
		cin >> a >> b >> c;
		dp[a][b] = min(dp[a][b], c);
		m--;
	}

	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
			

					
			
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			if (dp[i][j]!=INF)
				cout<<dp[i][j]<<" ";
			else
				cout<<"0 ";	
		cout << '\n';
	}
}
