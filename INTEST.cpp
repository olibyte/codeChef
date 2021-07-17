#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    int k;
    int x;
    int count = 0;
    cin >> n >> k;
    while (n--) {
        cin >> x;
        if (x % k == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}