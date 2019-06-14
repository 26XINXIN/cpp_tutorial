/*
 * operators
 */

#include <iostream>
#include <cstdlib>
#include <cmath> // math operaters

using namespace std;

int main(){
    // arithmatic operators
    cout << "arithmatic operators:" << endl;
    cout << "10 + 20 = "    << 10 + 20 << endl;
    cout << "10.0 - 2.3 = " << 10.0 - 2.3 << endl;
    cout << "2.3 + 2 = "    << 2.3 + 2 << endl;
    cout << "4 * 5 = "      << 4 * 5 << endl;
    cout << "21 / 5 = "     << 21 / 5 << endl;
    cout << "21 % 5 = "     << 21 % 5 << endl;
    cout << "21 / 5.0 = "   << 21 / 5.0 << endl;

    int i = 1;
    i++;
    cout << "i = " << i << endl;
    i--;
    cout << "i = " << i << endl;

    // relation operators
    int a = 10, b = 21;
    cout << "relation operators:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a < b ? "      << (a < b) << endl;
    cout << "a > b ? "      << (a > b) << endl;
    cout << "a <= b ? "     << (a <= b) << endl;
    cout << "a >= b ? "     << (a >= b) << endl;
    cout << "a == b ? "     << (a == b) << endl;
    cout << "a != b ? "     << (a == b) << endl;
    
    // 3-elem operator: () ? () : ()
    a > b ? cout << "a is bigger" : cout << "b is bigger";

    // logistic operators
    bool sun_raises_from_east = true;
    bool sun_raises_from_west = false;
    cout << "&& (and) " << (sun_raises_from_east && sun_raises_from_west) << endl;
    cout << "|| (or) " << (sun_raises_from_east || sun_raises_from_west) << endl;
    cout << "! (not) " << (!sun_raises_from_east) << endl;

    // bit operators
    
    // math operators
    double d = 3.0;
    cout << "sqrt(d) = " << sqrt(d) << endl;
    cout << "exp(d) = " << exp(d) << endl;
    // etc

    return 0;
}