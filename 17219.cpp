/* 파이썬으로 풀었는데 2중 for문 돌렸더니 시간초과가 나버렸다..

a,b = map(int,input().split())
arr=[]

for i in range (a):
    arr.append(input().split())

for j in range (b):
    ans=input()
    for k in range(a):
        if ans==arr[k][0]:
            print(arr[k][1])

*/
              
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);
  map<string, string> vect;
  int n, m;
  cin >> n >> m;

  for(int i = 0 ; i < n ; i++)
  {
    string site, pw;
    cin >> site >> pw;
    vect.insert(pair<string, string>(site, pw));
  }

  for(int i = 0 ; i < m ; i++)
  {
    string ans;
    cin >> ans;
    cout << vect[ans] << '\n';
  }
}              
            
            
