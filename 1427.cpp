#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool desc(int a,int b)
{
	return a>b;
}

int main()
{
string a;
cin>>a;
stoi(a);
int b=a.size();
int arr[b]={0};
for(int i=0; i<b; i++)
{
arr[i]=a.at(i)-48;
}
sort(arr, arr+b,desc);

for(int i=0; i<b; i++)
{
cout<<arr[i];
}
}
