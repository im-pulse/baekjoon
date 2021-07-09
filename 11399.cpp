
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int people[a] = {1001};
    
    for(int i=0; i<a; i++)
    {
      cin>>people[i];
    }
    
    sort(people, people+a);
    
    int sum=0;
    for(int i=0; i<a; i++)
    {     
        for(int j=0; j<i+1; j++)
        {
          sum=sum+people[j];
        }
    }
    
    cout<<sum;
        
}
