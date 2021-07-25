#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, first = 0, last;
        cin >> n;
        last = n % 10;
        while(n) {
            first = n % 10;
            n /= 10;
        }
        cout << (first+last) << endl;
    }
    return 0;
}