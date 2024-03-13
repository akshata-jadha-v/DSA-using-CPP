// hello world program

#include <iostream>
using namespace std;

int main()
{

    cout << "Hello World";
}

// initalization and declaration

#include <iostream>
using namespace std;

// int -> 4byte
int main()
{

    int num = 50;
    cout << num << endl;

    cout << sizeof(num) << endl;

    // character -> 1byte
    char ch = 'k';
    cout << ch << endl;
    cout << sizeof(ch) << endl;

    // float -> 4byte
    float point = 1.69;
    cout << point << endl;
    cout << sizeof(point) << endl;

    // long -> 4byte
    long number = 23;
    cout << number << endl;
    cout << sizeof(number) << endl;

    // boolean -> 1byte
    bool t = true;
    bool f = false;
    cout << t << endl
         << f << endl
         << sizeof(t) << endl
         << sizeof(f) << endl;

    // operators

    int a = 5;
    int b = 10;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << b / a << endl;
    cout << b % a << endl;
}