#include <iostream>
#include <string>
#include <stack>

using namespace std;
stack<int>stk;
 
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (str == "push") {
            int x;
			cin >> x;
            stk.push(x);
        }
        else if (str == "top") {
            if (stk.empty())
				cout << "-1"<<"\n";
            else cout << stk.top() << "\n";
        }
        else if (str == "pop") {
            if (stk.empty())
				cout << "-1" << "\n";
            else 
			{
                cout << stk.top() << "\n";
                stk.pop();
            }
        }
        else if (str == "empty") {
            if (stk.empty())
				cout<< "1" << "\n";
			else
				cout<< "0" << "\n";
		}
        else {
            cout << stk.size() << "\n";
        }
    }
    return 0;
}
