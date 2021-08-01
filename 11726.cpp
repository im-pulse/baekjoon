#include <iostream>
 
using namespace std;
 
int arr[1002]= {0};
 
int main() {

int a;
cin>>a;

arr[1]=1;
arr[2]=2;

for(int i=3; i<=a; i++)
{
	arr[i]=(arr[i-1]+arr[i-2])%10007;
}

cout<<arr[a];
}
