#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, num, rem;
    int rev;
    cin>>t;

    while (t--)
    {
        cin>>num;
        if(num == 0) {
            cout<<0<<endl;
            continue;
        }
        
        while (num) {
            rev = rev * 10 + (num % 10);
            num /= 10;
        }
        cout<<rev<<endl;
        rev = 0;
    }
}
