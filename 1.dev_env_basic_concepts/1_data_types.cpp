/* 
 * data types
 */

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

// global variables can be viewed by all code blocks.
int integer = 99;

int main(){
    // local variables can only be view within the area of curly braces.

    // `int` means short range integers. In traditional programming 
    // languages like Pascal, VB, etc., it typically use mem space 
    // of 8 bits, which can refer to integers ranging from -2^7 to 
    // 2^7-1. 
    int integer = 100;

    // `unsigned` means none negative integers. The difference between 
    // `unsigned` and `int` is that it can only represents none negative
    // numbers.
    unsigned unsigned_integer = 200;

    // `long` is larger `int`. Instead of using only 8- or 16-bit space, 
    // `long` typically uses 32- or 64-bit space for an integer. It can 
    // therefore represents larger range of integers.
    long long_integer = 10000000;

    long long very_long_integer;
    unsigned long long very_long_positive_integer;
    
    // `float` represents decimal numbers. It only has precision of 6 decimal 
    // places. I.e., it can't tell the difference between 0.0000001 and 0.0000002.
    float floating_point_number = 0.000001;

    // `double` has more precise decimal places than `float`.
    // In practice, we typically use `double` instead of `float`.
    double double_precision_floating_point_number = 0.0000000001;

    // `char` represents a character. The character should be single quoted.
    char character = 'a';

    // `bool` has only 2 values: `true` or `false`.
    bool bool_ = true;

    // `void` means no type.
    // void void_value = (void)integer;

    // `arrays` represents a list of data, it can be `char`s, `int`s, `double`s, etc.
    // the array length is defined in the bracket.
    int integer_array[3] = {1, 2, 3};
    double double_array[] = {1.0, 2.0, 3.0};
    char str[] = "hello world";

    // continously define many variables
    int a, b, c = 0;
    double e = 0.1, f, g;

    // `cout` prints data to std output
    cout << "hello world!" << endl;

    // escape characters. E.g.:
    cout << "hello\tworld\n\n";
    
    // input, output
    cin >> a >> b;
    cout << "your a = " << a << ", b = " << b << endl;
    scanf("%d %d", &a, &b);
    printf("your a = %d, b = %d\n", a, b);

    return 0;
}