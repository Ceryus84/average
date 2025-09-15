/*
Aidan Butcher
CS 3140 - Intro to C++
Computes the average of inputted numbers using while loop.
*/

#include <iostream>
using namespace std;

int main()
{
    int x, count = 0;
    float sum = 0.0;

    cout << "Please enter some integers:\n"
         << "(Break with any letter)\n";

    while (cin >> x)
    {
        sum += x;
        ++count;
    }
    cout << "The average of the numbers: " << (sum / count) << '\n';

    return 0;
}