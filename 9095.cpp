#include <iostream>

using namespace std;

int arr[12] = {0};

int main()
{
    int a,b;
    cin>>a;

    
    for(int i=0; i<a; i++)
    {
    	    arr[1]=1;
		    arr[2]=2;
		    arr[3]=4;
    	cin>>b;
    	for(int j=4; j<=b; j++)
    	{
    		arr[j]=arr[j-1]+arr[j-2]+arr[j-3];
		}
    	cout<<arr[b]<<'\n';
    	arr[12]= {0};
	}

}
