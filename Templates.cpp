#include <iostream>
#include <cmath>

using namespace std;

// Josh Powers
// CIS 1202
// 5/3/2026
// Templates


// Function prototypes
template <typename T>
T half(T value);

int half(int value);


int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;


    cout << half(a) << endl;

    cout << half(b) << endl;

    cout << half(c) << endl;

    return 0;
}

// Function floating-point types
template <typename T>
T half(T value)
{
    return value / 2.0;
}

// Function for integers
int half(int value)
{
    return static_cast<int>(round(static_cast<double>(value) / 2.0));
}