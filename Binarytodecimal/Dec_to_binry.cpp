#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> i;

        i++;
    }
    cout << "the binary of these number is" << ans << endl;
}