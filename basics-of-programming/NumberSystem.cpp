// The decimalToBinary function takes an integer n as input and returns its binary representation as an integer.
// Inside this function:
// binaryNumber is initialized to 0 to store the binary representation.
// i is used as a counter to keep track of the bit position.
// A while loop extracts each bit of the decimal number n one by one:
// int bit = n & 1; extracts the rightmost bit of n using bitwise AND.
// The bit is then added to the binaryNumber at the appropriate position using the pow function and a right shift operation (n = n >> 1) is performed to get the next bit.
// This process continues until n becomes 0.

#include <iosream>
#include <cmath>
using namespace std;

// Decimal to Binary Conversion
// Method 1 by division

int decimalToBinaryMethod1(int n)
{
    // Division Method
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
    }
    return binaryno;
}
int main()
{

    int n;
    cin >> n;
    int binary = decimalToBinaryMethod1(n);
    cout << binary << endl;
}

// Method 2 by Bitwise

int decimalToBinaryMethod2(int n)
{
    // Bitwise Method
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}

// Binary to Decimal Conversion
int binaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i++);
        n /= 10;
    }
    return decimal;
}

int main()
{
    int binaryno;
    cin >> binaryno;
    cout << binaryToDecimal(binaryno) << endl;
}