#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int iter, result;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        int n, temp;
        result = 0;
        cin >> n;
        while (n > 0)
        {
            temp = n % 10;
            n /= 10;
            if (temp == 4)
            {
                result += 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}
