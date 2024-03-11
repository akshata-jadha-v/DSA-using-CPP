#include <iostream>
using namespace std;

int main()
{

    // outer loop -> rows
    for (int i = 0; i < 3; i = i + 1)
    {
        // for each row, print 5 star
        // inner loop -> print 5 stars

        for (int j = 0; j < 5; j = j + 1)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
