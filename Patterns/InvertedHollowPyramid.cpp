#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        // spaces
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }
        // stars
        int totalCol = n - row;
        for (int col = 0; col < totalCol; col = col + 1)
        {
            // if first or last col
            if (col == 0 || col == totalCol - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}