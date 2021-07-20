#include <iostream>
using namespace std;


int arr[11];
int main()
{
int a,b; //a:종류, b:만들어야하는 가치
cin>>a>>b;
 for(int i=0; i<a; i++)
  { 
   cin>>arr[i];
  }
int ret = 0;
for (int i = a - 1; i >= 0; i--) 
{
  if (b == 0)
	  break;
  while (b >= arr[i]) 
    {
      b -= arr[i];
      ret++;
    }
 }

  cout << ret;
  return 0;
}
 
