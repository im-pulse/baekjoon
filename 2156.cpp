#include <iostream>
using namespace std;

int a, dp[10001], arr[10001];

int Max(int a, int b, int c){
if(a >=b && a >= c) return a;
else if (b >= a && b >= c) return b; 
else return c;
}


int main(void) {
        cin>>a;
        for(int i = 1; i <= a; i++) 
        	cin>>arr[i];
        
        dp[1] = arr[1];
        dp[2] = arr[1] + arr[2];

        for (int i = 3; i <= a; i++) {
                dp[i] = Max(dp[i - 1], dp[i - 2]+arr[i], dp[i - 3]+ arr[i - 1] + arr[i]);
        }

        cout<<dp[a];
}
