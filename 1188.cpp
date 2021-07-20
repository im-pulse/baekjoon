/*
stl을 사용하지 않고 구현한 프로그램입니다.

#include<iostream>

using namespace std;

int gcd(int a, int b){
    
    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<y-gcd(x,y);
}
*/

/* 
제출 후, 코드 길이를 줄여보고 싶은 마음(?)에 구글링을 통해 방법을 찾다가
C++17에서 gcd 라이브러리가 추가되었음을 인지하고 해당 방식으로 다시 코딩해 보았습니다.
*/

#include<iostream>
#include<numeric>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<y-gcd(x,y);
}
