#include <iosream>
using namespace std;

int decimalToBinaryMethod1(int n)
{
    // Division Method

    while (n > 0)
    {
        int bit = n % 2;
        cout << bit << endl;
        n = n / 2;
    }
    return0;
}
int main()
{

    int n;
    cin >> n;
    int binary = decimalToBinaryMethod1(n);
}