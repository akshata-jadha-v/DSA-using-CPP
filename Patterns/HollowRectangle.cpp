#include <iostream>
using namespace std;

int main()
{

    // outer loop
    for (int row = 0; row < 5; row = row + 1)
    {
        // inner loop
        for (int col = 0; col < 5; col = col + 1)
        {
            // if zeroth pr last row, then print star
            if (row == 0 || row == 4)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == 4)
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}