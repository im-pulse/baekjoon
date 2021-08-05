
#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int arr[100002]={0};

int main(){

int a;
scanf("%d", &a);
for(int i=1; i<=a; i++)
{
scanf("%d", &arr[i]);
}

int b;
scanf("%d", &b);

int sum=0;
{
	int c,d=0;
	
	for(int j=0; j<b; j++)
	{	
		sum=0;
		c=0;
		d=0;
		cin>>c>>d;
	
	for(int i=c; i<=d; i++)
	{
	sum+=arr[i];	
	}			
		
	cout<<sum<<'\n';
	}
	
}

}
