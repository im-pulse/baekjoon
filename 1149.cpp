#include <iostream>
#include <algorithm>
using namespace std;

int minimum(int a, int b, int c){
if(a <=b && a <= c) return a;
else if (b <= a && b <= c) return b; 
else return c;
}



int dp[1001][3]= {0,};
int main() {
    int N;
    int cost[3];

    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cin >> cost[0] >> cost[1] >> cost[2];
        dp[i][0] = min(dp[i-1][1],dp[i-1][2]) + cost[0];
        dp[i][1] = min(dp[i-1][0],dp[i-1][2]) + cost[1];
        dp[i][2] = min(dp[i-1][1],dp[i-1][0]) + cost[2];
    }
    cout << minimum(dp[N][0],dp[N][1],dp[N][2]);
}
